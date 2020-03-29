

SDL_Color GetPixel(SDL_Surface *pSurface,int x,int y)
{
SDL_Color color;
Uint32 col=0;
char* pPosition=(char* ) pSurface->pixels;
pPosition+= (pSurface->pitch * y);
pPosition+= (pSurface->format->BytesPerPixel *x);
memcpy(&col ,pPosition ,pSurface->format->BytesPerPixel);
SDL_GetRGB(col,pSurface->format, &color.r, &color.g, &color.b);
return (color);
}


int color_test(SDL_Surface *pSurface,perso p)
{
SDL_Color color;
SDL_Rect pos[6];int i;
pos[0].x=p.pos.x+12;pos[0].y=p.pos.y+65;
pos[1].x=p.pos.x+13;pos[1].y=p.pos.y+100;
pos[2].x=p.pos.x+86;pos[2].y=p.pos.y+113;
pos[3].x=p.pos.x+90;pos[3].y=p.pos.y+58;
pos[4].x=p.pos.x+10;pos[4].y=p.pos.y+63;
for(i=0;i<4;i++) {
color=GetPixel(pSurface,pos[i].x-p.bg.x,pos[i].y-p.bg.y);
if((color.r==0)&&(color.g==0)&&(color.b==0))
return 1;}return 0;
}










