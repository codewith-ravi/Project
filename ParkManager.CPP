#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Menu();
void Bus();
void Car();
void Riksha();
void Showdata();
void Delete();
void Bike();
void Cycle();
int nob=0,noc=0,nor=0,not=0,noa=0,count=0,amount=0;
void main()
{
while(1)
{
clrscr();
switch(Menu())
{
case 1:
Bus();
break;
case 2:
Car();
break;
case 3:
Riksha();
break;
case 4:
Bike();
break;
case 5:
Cycle();
break;
case 6:
Showdata();
break;
case 7:
Delete();
break;
case 8:
exit(0);
default:
printf("Invalid entry\n");
}
getch();
}
}
int Menu()
{
int ch;
printf("press 1 for bus\n");
printf("cost for bus=200 rupees\n\n");
printf("press 2 for car\n");
printf("cost for car=100 rupees\n\n");
printf("press 3 for riksha\n");
printf("cost for riksha=50 rupees\n\n");
printf("press 4 for bike\n");
printf("cost for bike=25 rupees\n\n");
printf("press 5 for cycle\n");
printf("cost for cycle=free\n\n");
printf("press 6 for checking status\n");
printf("press 7 for deleting all data\n");
printf("press 8 for exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
return(ch);
}
void Bus()
{
printf("Entry successfull\n\n");
nob++;
count++;
amount=amount+200;
}
void Car()
{
printf("Entry successfull\n\n");
noc++;
count++;
amount=amount+100;
}
void Riksha()
{
 printf("Entry successfull\n\n");
 nor++;
 count++;
 amount=amount+50;

}
void Showdata()
{
printf("\ntotal number of bus=%d",nob);
printf("\ntotal number of car=%d",noc);
printf("\ntotal number of riksha=%d",nor);
printf("\ntotal number of bike=%d",not);
printf("\ntotal number of cycle=%d",noa);
printf("\ntotal number of vehicles=%d",count);
printf("\ntotal amount=%d",amount);
}
void Delete()
{
nob=0;
noc=0;
nor=0;
not=0;
noa=0;
count=0;
amount=0;
}
void Bike()
{
printf("Entry successfull\n");
not++;
count++;
amount=amount+25;
}
void Cycle()
{ printf("Entry successfull\n");
noa++;
count++;
amount=amount+0;
}