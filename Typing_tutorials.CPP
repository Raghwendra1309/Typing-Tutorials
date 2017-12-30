/*TYPING TUTOR BY RAGHWENDRA KUMAR */
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>
#include<fstream.h>
#include<graphics.h>
#include<process.h>
void basics();
void letters();
void sentence();
void main()
{
clrscr();
int opt;
menu:
clrscr();
cout<<"\n\n\t\t\t   =====TYPING TUTOR =====";
cout<<"\n\n\n\t\t  ::MAIN MENU::";
cout<<"\n\n\t\t1.Learn basics";
cout<<"\n\n\t\t2.Type the letters";
cout<<"\n\n\t\t3.Type the sentence";
cout<<"\n\n\t\t0.Exit";
cout<<"\n\n\n\t\tEnter your choice : ";
cin>>opt;
switch(opt)
{
case 1: basics();
goto menu;
//break;
case 2: letters();
goto menu;
//break;
case 3: sentence();
goto menu;
//break;
case 0: exit(0);
//break;
default: goto menu;
//break;
}
}
void basics()
{
clrscr();
int rep;
char choice1,choice2;
char key;
char mid[]="asdfgf ;lkjhj";
char top[]="qwertrpoiuyu";
char bot[]="zxcvbv /.,mnm";
cout<<"\n\nHello! I think you are new dude to the world of fast typing.";
delay(1000);
cout<<"\n\nAnd as I have now agreed to teach you how to be fast in typing......";
delay(1000);
cout<<"\n\nLet us start.Are you ready ?(y/n)";
cin>>choice1;
if(choice1=='y'||choice1=='Y')
{
clrscr();
cout<<"\n\nUnderstand, it is very to do this....";
delay(1000);
cout<<"\n\nFollow me.......";
delay(1000);
cout<<"\n\nPress any key to start.";
getch();
cout<<"\n\nLet us study the basics....";
delay(1000);
cout<<"\n\nFirst you have to learn the mid row.....";
cout<<"\n\nHow many times do you want to practice : ";
cin>>rep;
cout<<"\n\nDo you want to see the finger positioning ?(y/n)";
cin>>choice2;
if(choice2=='y'||choice2=='Y')
    {
	/************************************/
cout<<"\n\nUnder development..........";
getch();
    }
cout<<"\n\nType what you see on the screen...";
for(int i=0;i<rep;++i)
    {
for(int j=0;j<13;++j)
	{
cout<<"\n\nEnter this:"<<mid[j];
cout<<"\tYou entered:";
key=getche();
if(key==mid[j])
	    {
cout<<"\tCorrect..";
sound(300);
delay(200);
nosound();
	    }
else
	    {
cout<<"\tWrong";
sound(600);
delay(100);
nosound();
sound(700);
delay(100);
nosound();
	    }
	}
    }
//Top row
cout<<"\n\nNow you have to learn the top row.....";
cout<<"\n\nHow many times do you want to practice : ";
cin>>rep;
cout<<"\n\nDo you want to see the finger positioning ?(y/n)";
cin>>choice2;
if(choice2=='y'||choice2=='Y')
    {
	/************************************/
cout<<"\n\nUnder development..........";
getch();
    }
cout<<"\n\nType what you see on the screen...";
for(i=0;i<rep;++i)
    {
for(int j=0;j<13;++j)
	{
cout<<"\n\nEnter this:"<<top[j];
cout<<"\tYou entered:";
key=getche();
if(key==top[j])
	    {
cout<<"\tCorrect..";
sound(300);
delay(200);
nosound();
	    }
else
	    {
cout<<"\tWrong";
sound(600);
delay(100);
nosound();
sound(700);
delay(100);
nosound();
	    }
	}
    }
//Bottom Row
cout<<"\n\nFirst you have to learn the bottom row.....";
cout<<"\n\nHow many times do you want to practice : ";
cin>>rep;
cout<<"\n\nDo you want to see the finger positioning ?(y/n)";
cin>>choice2;
if(choice2=='y'||choice2=='Y')
    {
	/************************************/
cout<<"\n\nUnder development..........";
getch();
    }
cout<<"\n\nType what you see on the screen...";
for(i=0;i<rep;++i)
    {
for(int j=0;j<13;++j)
	{
cout<<"\n\nEnter this:"<<bot[j];
cout<<"\tYou entered:";
key=getche();
if(key==bot[j])
	    {
cout<<"\tCorrect..";
sound(300);
delay(200);
nosound();
	    }
else
	    {
cout<<"\tWrong";
sound(600);
delay(100);
nosound();
sound(700);
delay(100);
nosound();
	    }
	}
    }
}  //wanna learn
else
{
cout<<"\n\nOh! I think you are busy. OK See you later.......";
delay(3000);
}
}
void letters()
{
randomize();
char choice;
int num;
int score=0,randnum;
char letter,key;
clrscr();
cout<<"In this test you will have to type the letters you see on the screen.";
delay(1000);
cout<<"\n\nDo you want to see the help menu ?(y/n)";
choice=getche();
if(choice=='y'||choice=='Y')
{
cout<<"\n\n1.You are to type the random letters you see on the screen.";
delay(2000);
cout<<"\n\n2.If your answer is correct you can hear this beep.";
while(!kbhit())
{
sound(300);
delay(200);
nosound();
}
getch();
cout<<"\n\n3.If your answer is wrong you will hear this";
while(!kbhit())
{
sound(600);
delay(100);
nosound();
sound(700);
delay(100);
nosound();
}
}
cout<<"\n\nPress any key when you are ready.";
getch();
int number;
cout<<"\n\nWhat should be the max score:";
cin>>number;
for(int i=0;i<number;i++)
{
clrscr();
randnum=random(25);
for(int j=0;j<randnum;j++)
cout<<"\n";
randnum=random(25);
for(j=0;j<randnum;j++)
cout<<"\t";
num=65+random(25);
letter=(char)num;
cout<<letter;
key=getch();
if(key==letter)
{
sound(300);
delay(200);
nosound();
score++;
}
else
{
sound(600);
delay(200);
nosound();
sound(700);
delay(200);
nosound();
}
}
cout<<"\n\n\nYour total score is "<<score;
getch();
}
void sentence()
{
clrscr();
time_t t1,t2;
char line[300];
cout<<"This is spped test to try your speed.\n";
delay(1000);
type:
cout<<"\nYou will have to type the sentence given.\n";
delay(1000);
cout<<"\n\nPress any key to start.";
getch();
clrscr();
t1 = time(NULL);
cout<<"I am learning to type.";
cout<<"\n\nEnter the sentence:";
gets(line);
t2 = time(NULL);
if(!strcmp(line,"I am learning to type."))
{
cout<<"\n\nYou could type the sentence in "<<t2-t1<<" seconds.";
getch();
}
else
{
cout<<"\n\nThe sentence you typed was wrong..";
getch();
goto type;
}
}
