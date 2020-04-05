void resolution_enigmes(SDL_Surface *ecran,enigme t[20])
{int selected=0,exit=0,i;SDL_Rect pos;
SDL_Surface *arrow=IMG_Load("arrow.png");
SDL_Event event;

i=afficherenigme(ecran,t);
pos.x=t[i].pos.x+350;pos.y=t[i].pos.y+455;
SDL_BlitSurface(arrow, NULL, ecran,&pos);SDL_Flip(ecran);
while(exit==0)
{
while( SDL_PollEvent( &event ) )
{
if(event.type==SDL_KEYDOWN) {
if(event.key.keysym.sym==SDLK_UP) selected--;
if(event.key.keysym.sym==SDLK_DOWN) selected++;
if(selected==-1) selected=3;if(selected==4) selected=0;
if((event.key.keysym.sym==SDLK_RETURN)&&(selected==t[i].correct)) exit=1;
pos.y=t[i].pos.y+455+(selected*80);
afficherenigme(ecran,t);
SDL_BlitSurface(arrow, NULL, ecran,&pos);SDL_Flip(ecran);
}}}t[i].used=1;}