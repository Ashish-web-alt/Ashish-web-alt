#include<stdio.h>
int main(){
int i,n,fact=1;
int *p;
printf("Enter any number");
scanf("%d",&n);
p=&n;
for(i=*p;i>=1;i--){
  fact=fact*i;
}
printf("The factorial is %d",fact);
}
