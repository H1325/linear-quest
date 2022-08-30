#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<STRING.H>
#include<TIME.H>
#include<windows.h>
#include<fstream>
using namespace std;
int hp=20,v,mp=20,n,number,guess,ehp=35,g,b,i,c,move;
char str_name[20];
void lose(void)
{
cout<<"_youlost_"<<endl;
cout<<"EVEEEEVEE"<<endl;
cout<<"VHEEEEEEE"<<endl;
cout<<"#########"<<endl;
cout<<"you have lost our faith hero"<<endl;
hp=20;
mp=20;
ehp=20;
srand((unsigned)time(0));
number=(rand()%100);
cout<<("what amount of money did you lose?any guesses(you had around 100 gold).")<<endl;
cout<<"you have 5 try."<<endl;
for(int x=0;x<6;x++)
{
cin>>guess;
if((guess<0)||(guess>100))
{
cout<<"you dont have that much do you?"<<endl;
}
else if(guess<number){
cout<<"sorry but thats too low of a loss,-Z are not considerable."<<endl;
}else if(guess>number){
cout<<"you are being too generous please try to see how much did you lost."<<endl;
}else if(guess==number){
cout<<guess<<"is correct!what are you, a saint?"<<endl;
}
}
}
void win(void)
{
cout<<"you won hero!"<<endl;
hp=20;
mp=20;
ehp=20;
srand((unsigned)time (0));
int randomno;
for(int index=0;index<=5;index++)
randomno=(rand()%10)+1;
cout<<"-victory--"<<endl;
cout<<"ovooVoooVo"<<endl;
cout<<"VoVoVovvoV"<<endl;
cout<<"vVvvVVVoHV"<<endl;
cout<<"oooooooooo"<<endl;
cout<<randomno<<"take this gold.";
cout<<"what would you like to do now?";
if(randomno<5)
{
cout<<"not enough funds."<<endl;
}else{
cout<<"lets go see the world."<<endl;
cout<<"1-cave of end."<<endl<<"2-sea of end"<<endl;
cin>>g;
switch(g)
{
case 1:
cout<<"cave of end is full of monsters."<<endl;
cout<<"you fought like a mad man and got yourself a sword from the hero stone"<<endl;
break;
case 2:
cout<<"the sea is full of merpeople,what to do now?"<<endl;
cout<<"lets see-"<<endl;
break;
default:
cout<<"you dont seem learned hero,choose seriously."<<endl;
}
{
cout<<("select your routine hero=1=enjoy 2=struggle.")<<endl;
cin>>v;
switch(v){
case 1:
cout<<"you sat down by the shour to enjoy fishing."<<endl;
break;
case 2:
cout<<"you fought some monsters and got some experiance"<<endl;
break;
default:
cout<<"having no knowledge means no worries"<<endl;
}
}
}
}
int main()
{ 
cout<<"//////INSTRUCTIONS\\\\\\"<<endl;
cout<<"# represents tree;o represents pathline;0 represent danger"<<endl;
cout<<"hp is your health bar.mp is your magic power."<<endl;
cout<<"in a scene V is vilager and v are children ."<<endl;
cout<<"in order to play ->you are H and enemy is E (his hp is ehp)"<<endl;
cout<<"game is an interactive program please enjoy"<<endl;
cout<<"use proper key commands so that the game"<<endl;
cout<<"\\\\\\\\\ENJOY//////////"<<endl;
cout<<"villager chief: may i know your name"<<endl;
cin>>str_name;
cout<< str_name<<",how can i help you"<<endl;
cout<<"1-do you know me?."<<endl<< "2-your name?."<<endl<<"3-what should be my mission."<<endl<< "4-i think i will get going."<<endl;
cin>>i;
switch(i)
{
case 1:
cout<<"villager is angry at you"<<endl;
cout<<"0000000000"<<endl;
cout<<"0V/ooooooH"<<endl;
cout<<"##########"<<endl;
cout<<"how will i know,who are you?"<<endl;
break;
case 2:
cout<<"villager turns out to be shy"<<endl;
cout<<"0000000000"<<endl;
cout<<"VoooooooH0"<<endl;
cout<<"##########"<<endl;
cout<<"ahem ....my name is jack,lets fight.(takes his sword out)"<<endl;
break;
case 3:
cout<<"villagers are ready for the battle"<<endl;
cout<<"000000000"<<endl;
cout<<"V-oooooHo"<<endl;
cout<<"#########"<<endl;
cout<<"fight for your life ,i guess, this place is'nt safe."<<endl;
break;
case 4:
cout<<"villager is a kind guy"<<endl;
cout<<"0000000000"<<endl;
cout<<"0oooV/Hooo"<<endl;
cout<<"##########"<<endl;
cout<<"take care of yourself,goodbye"<<str_name<<endl;
break;
default:
cout<<"villager seems to be scared"<<endl;
cout<<"ooooooooooooo"<<endl;
cout<<"VooHooooooooE"<<endl;
cout<<"#############"<<endl;
cout<<"you didnt got to run from danger."<<endl;
}
cout<<"the villager ran away leaving his sword"<<endl;
cout<<"000000000"<<endl;
cout<<"<V/H0000E"<<endl;
cout<<"#########"<<endl;
cout<<"<<<<<>>>>>"<<endl;
cout<<"a monster is approaching"<<endl;
cout<<"000000000"<<endl;
cout<<"Hooooo-E0"<<endl;
cout<<"#########"<<endl;
label:
cout<<"ehp:"<<ehp<<endl<<"hp"<<hp<<endl<<"mp"<<mp<<endl<<"(1)attack"<<endl<<"(2)magic missile"<<endl<<"(3)summon"<<endl;
cin>>move;
system("cls");
cout<<"status:"<<endl;
if(move==1)
{
cout<<"-yourturn-"<<endl;
cout<<"000000000"<<endl;
cout<<"E-Hooooo0"<<endl;
cout<<"#########"<<endl;
cout<<"you attacked with a sword."<<endl;
ehp=ehp-2;
if(ehp<=0){
win();
return 0;
}
if(hp<=0){
lose();
return 0;
}
cout<<"enemy-turn"<<endl;
cout<<"000000000"<<endl;
cout<<"E->->->-H"<<endl;
cout<<"#########"<<endl;
cout<<"enemy casted a magic missile"<<endl<<endl;
hp=hp-2;
}
if(move==2)
{
cout<<"-yourturn-"<<endl;
cout<<"000000000"<<endl;
cout<<"E<-<-<-<H"<<endl;
cout<<"#########"<<endl;
cout<<"you casted a magic missile:"<<endl;
ehp=ehp-3;
mp=mp-5;
if(ehp<=0){
win();
return 0;
}
if(hp<=0){
lose();
return 0;
}
cout<<"enemy-turn"<<endl;
cout<<"0000000000"<<endl;
cout<<"E-------)H"<<endl;
cout<<"##########"<<endl;
cout<<"enemy uses a meditative move drain:"<<endl<<endl;
hp=hp-1;
ehp=ehp+1;
}
if(move==3)
{
cout<<"-yourturn-"<<endl;
cout<<"00///**00"<<endl;
cout<<"E///(..)H"<<endl;
cout<<"#########"<<endl;
cout<<"you summoned a being called ultima."<<endl;
ehp=ehp-10;
mp=mp-10;
if(mp<=0){
hp=hp-4;
}
else
{
hp=hp-1;
}
if(ehp<=0)
{
win();
return 0;
}
else if(hp<=0)
{
lose();
return 0;
}
cout<<"enemy-turn"<<endl;
cout<<"000000000"<<endl;
cout<<"0oooooE-H"<<endl;
cout<<"#########"<<endl;
cout<<"enemy used scratch it got near critical"<<endl<<endl;
hp=hp-2;
}
goto label;
}
 //i would like to make a full 2d game but a long duration was required .
 //if anyone is intrested in learning with me i will make a whole game in c++.
 //there are many greater gamesin c++ like assasins creed
 //inspiration is to make a game in my engineering years.
