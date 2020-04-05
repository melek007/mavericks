void generate_enigmes(enigme t[20])
{int i=0,j,a,b;char ch[30];
TTF_Init();
TTF_Font *fontquestion = NULL;
TTF_Font *fontanswer = NULL;
SDL_Color textColor = { 0, 0, 0 };
fontquestion = TTF_OpenFont("Blanka-Regular.ttf", 80);
fontanswer = TTF_OpenFont("Orbitron Light.ttf", 60);
srand(time(NULL));while(t[i].type==0) i++;
while(i<20)
{
t[i].type=rand()%2 +1;t[i].used=0;
a=rand()%100;b=rand()%100;
t[i].correct=a*1000+b;
t[i].background=IMG_Load("backenigme.png");
t[i].pos.x=0;t[i].pos.y=0;
if(t[i].type==1) sprintf(ch,"%d%s%d",a,"+",b);
if(t[i].type==2) sprintf(ch,"%d%s%d",a,"-",b);
t[i].question=TTF_RenderText_Blended(fontquestion,ch,textColor);
for(j=0;j<4;j++)
{
if(t[i].type==1) a=rand()%200;else a=rand() %200 -100;
sprintf(ch,"%d",a);
t[i].answers[j]=TTF_RenderText_Blended(fontanswer,ch,textColor);
}i++;}}


void tri(enigme t[20])
{int i,j,random,random1;enigme tri;SDL_Surface *answer=NULL;
srand(time(NULL));
for(i=0;i<20;i++) //questions
{
random=rand() %20;
random1=rand() %20;
tri=t[random];
t[random]=t[random1];
t[random1]=tri;
random=rand() %4; //answers
answer=t[i].answers[random];
t[i].answers[random]=t[i].answers[0];
t[i].answers[0]=answer;t[i].correct=random;
}}