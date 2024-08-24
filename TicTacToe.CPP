#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
void check(char,char);
void show()
{
printf("\n\n\t\t\tTic Tac Toe Game:\n");
printf("\n\n\t\t\t---|---|---\n");
printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
printf("\t\t\t---|---|---\n");
printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
printf("\t\t\t---|---|---\n");
printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
printf("\t\t\t---|---|---\n");
}
void symbol()
{
printf("\nplayer 1 symbol :x:");
printf("\nplayer 2 symbol :0:\n");
}
void start()
{
char pa;
printf("\nWho will start the game : player 1 or player 2\n");
scanf("%c",&pa);
}
void play()
{
char p,s;
printf("\nEnter position and symbol for the player\n");
fflush(stdin);
scanf("%c",&p);
fflush(stdin);
scanf("%c",&s);
check(p,s);
}
void check(char P,char S)
{
int i;
for(i=0;i<9;i++)
{
if(a[i]==P)
a[i]=S;
}
}
int end()
{
if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
return(100);
else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
return(200);
else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
return(100);
else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
return(200);
else if((a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
return(100);
else if((a[2]=='0'&&a[5]=='0'&&a[8]=='0')||(a[2]=='0'&&a[4]=='0'&&a[6]=='0'))
return(200);
else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
return(100);
else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
return(200);
else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
return(100);
else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
return(200);
else
return(300);
}

void main()
{
int k;
clrscr();
show();
symbol();
start();
label;
play();
clrscr();
show();
play();
k=end();
if(k==100)
printf("\n player 1 win:");
else if(k==200)
printf("\n player 2 win:");
else
goto label;
getch();
}