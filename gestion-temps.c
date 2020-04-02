unsigned int compteur(int *exit,int exit_time)
{
unsigned int lastTime = 0, currentTime;
  currentTime = SDL_GetTicks();
  if (currentTime > lastTime + 1000) 
    {lastTime = currentTime;}
  if (currentTime>exit_time*1000) (*exit)=1;
return currentTime;
}