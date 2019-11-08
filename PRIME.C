#include<stdio.h>
#include<conio.h>


int a,b,c,i,j,k;

void main(){
clrscr();

printf("Enter range :\n");

scanf("%d",&a);
scanf("%d",&b);

while(a<b){
c=0;
for( i=2;i<=a/2;i++){

if(a%i==0)
c=1;
break;
}

if(c==0)  {
printf("%d ",a);      }

++a;
  }

getch();

}
