#include<stdio.h>
#include<conio.h>
#include<process.h>

int l,b;
int n;

void main(){
clrscr();


printf("*** MENU *** \n" );
printf(" 1.RECTANGLE\n");
printf(" 2.TRIANGLE\n");
printf(" 3.EXIT\n");
printf("Enter Choice:");
scanf("%d",&n);

clrscr();

switch(n)
{
case 1:clrscr();
printf("Enter length and breadth:");
scanf("%d",&l);
scanf("%d",&b);
printf("Area of Rectangle  : %d",l*b);
break;
case 2:clrscr();
printf("Enter Base and Height:");
scanf("%d",&l);
scanf("%d",&b);
printf("Area of Triangle  : %d",(l*b)/2);
break;
case 3:exit(0);
}
getch();
}


















