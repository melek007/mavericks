int ground_test(SDL_Surface *pSurface,perso p)
{
SDL_Color color;
color=GetPixel(pSurface,p.pos.x+25-p.bg.x,p.pos.y+132-p.bg.y);
if((color.r==0)&&(color.g==0)&&(color.b==0))return 1;
color=GetPixel(pSurface,p.pos.x+90-p.bg.x,p.pos.y+132-p.bg.y);
if((color.r==0)&&(color.g==0)&&(color.b==0))return 1;return 0;
}
perso mouvement_souris(SDL_Surface *ecran,perso p,int *souris)
{
while((p.pos.x-p.next>10)||((p.next-p.pos.x>10)))
{
if(p.pos.x<p.next) {p.next=p.next-5*test_scrolling(p);p.direction=0;}
else if(p.pos.x>p.next) {p.next=p.next+5*test_scrolling(p);;p.direction=1;}
p=scrolling_background(p);
p=animate_animation(p);
affichage_background(p,ecran);
animate_blit(p,ecran);
do{p.pos.y=p.pos.y+5;}while(ground_test(p.background[1],p)==0);
do{p.pos.y=p.pos.y-5;}while(color_test(p.background[1],p)==1);
SDL_Flip(ecran);}(*souris)=0;
return p;
}
