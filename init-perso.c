perso initialisation_personnage(perso p)
{
p.hp[0]=100;
p.hp[1]=0;
p.score[0]=0;
p.pos.x=100;
p.pos.y=600;
p.pos.w=p.p[0][0]->w;
p.pos.h=p.p[0][0]->h;
p.direction=0;
p.previous_direction=0;
p.num=0;
p.pos_absolue=0;
p.next=100;
p.jump=0;
p.cheat=0;
p.speed=1;
return p;
}