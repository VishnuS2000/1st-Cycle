#include<stdio.h>
#include<conio.h>
#include<process.h>
int n,a,b;


void main(){



while(1){

clrscr();
printf("**** Calculator ****\n");
printf("1.Add\n");
printf("2.Subtract\n");
printf("3.Multiply\n");
printf("4.Divide\n");
printf("5.Exit");
scanf("%d",&n);



switch(n){

case 1:  printf("Enter two Numbers\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Result :%d",a+b);
break;

case 2:  printf("Enter two Numbers\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Result :%d",a-b);
break;

case 3:  printf("Enter two Numbers\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Result :%d",a*b);
break;

case 4:  printf("Enter two Numbers\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Result :%d",a/b);
break;
case 5:
exit(0);

default:
printf("Invalid Choice!\n");

       }
getch();
}


}
