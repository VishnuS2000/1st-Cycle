#include<stdio.h>
#include<conio.h>
#include<string.h>


char c[100];
int p,amount;
void main(){

clrscr();

printf("Enter the Consumer No.: \n");
gets(c);

printf("Enter Units :\n");
scanf("%d",&p);

if(p>=0&&p<=200)    {
amount=p/2;          }

if(p>=201&&p<=400)    {
amount=100+(65*(p-200))/100;}

if(p>=401&&p<=600)    {
amount=230+(80*(p-400))/100; }

if(p>600)   {
amount=390+1*(p-600);  }

clrscr();
printf("Consumer No. : \n");
puts(c);
printf("Amount : %d \n",amount);


getch();
}





