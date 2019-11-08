#include<stdio.h>
#include<conio.h>

int s,l,a[100],n,i;
void main(){

clrscr();



printf("Enter size :\n");
scanf("%d",&n);


printf("Enter %d Numbers :\n",n);

for(i=0;i<=n-1;i++){

scanf("%d",&a[i]);
}

i=0;
s=a[0];
l=a[0];
while(i<=n-1) {



if(a[i]<s) {

s=a[i];
}

if(a[i]>l){
l=a[i];


}



i++;
}

printf("Largest no: %d \n",l);
printf("Smallest no: %d \n",s);


getch();
}