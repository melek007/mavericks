
perso gestion_vie_et_score(perso p,int health,int score)
{
if(p.hp[0]+health<101) p.hp[0]=p.hp[0]+health;
else {p.hp[1]=p.hp[0]+health-100;p.hp[0]=100;}
p.score[0]=p.score[0]+score;
return p;
}
