#include<stdio.h>
#include<conio.h>


int n,r,sum;

void main(){

clrscr();

printf("Enter a Number :\n");
scanf("%d",&n);

while(n!=0){
r=n%10;
sum=sum+r;
n=n/10;


}

printf("Sum of Digits: %d",sum);


getch();

}









