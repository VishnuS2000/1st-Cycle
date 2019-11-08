#include<stdio.h>
#include<conio.h>


int marks,sum,i=0;
int  percentage;

void main(){

clrscr();


printf("Enter the Marks of 5 Subjects:");

while(i<=4){


scanf("%d",&marks);
sum=sum+marks;

i++;
}

percentage=sum/5;

printf("Sum : %d\n",sum);
printf("Percentage : %d\n",percentage);


if(percentage>=75)
printf("First Class with Distinction\n");

else if(percentage>=60&&percentage<=74)
printf("First Class \n");


else if(percentage>=50&&percentage<=59)
printf("Second Class\n");

else

printf("Failed!\n");

getch();

}







