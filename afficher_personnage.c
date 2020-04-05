void afficher_personnage(SDL_Surface *screen,perso p)
{
SDL_Rect position;
SDL_Surface *coin;TTF_Font *font = NULL;
TTF_Init();
font = TTF_OpenFont("Orbitron Light.ttf",50);
SDL_Color textColor = { 255, 255, 255 };
 char ch[30];sprintf(ch, "%d",p.score[0]);
SDL_Surface *text;
text= TTF_RenderText_Blended(font,ch, textColor);
SDL_Surface *hp_bar=IMG_Load("hp bar.png");
SDL_Rect pos; pos.x=p.pos.x+193;pos.y=p.pos.y-6;pos.h=9;pos.w=p.hp[0]*7/10 -1;
Uint32 couleur = SDL_MapRGB(screen->format,0,255,255);
SDL_FillRect(screen,&pos,couleur);
pos.x=p.pos.x+193;pos.y=p.pos.y+5;pos.w=p.hp[0]*7/10 -1;
couleur = SDL_MapRGB(screen->format,252,0,0);
SDL_FillRect(screen,&pos,couleur);
position.x=p.pos.x-10;position.y=p.pos.y-10;
SDL_BlitSurface(hp_bar, NULL, screen, &position);
}
