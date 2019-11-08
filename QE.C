#include<stdio.h>
#include<conio.h>


int a,b,c,r1,r2,d;

void main(){

clrscr();
printf("For QE ax^2+bx+c");

printf("Enter a,b,c\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);


d=(b^2)-(4*a*c);

if(d>=0){

r1=(-b+d^(1/2))/2;
r2=(-b-d^(1/2))/2;

printf("Roots are %d and %d ",r1,r2);
}

else
{

printf("Roots Imaginary\n");

}



getch();
}