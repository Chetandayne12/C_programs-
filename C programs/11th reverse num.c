#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,rev=0;
printf("enter five digit num \n");
scanf("%d",&n);
a=n%10;
n=n/10;
rev=rev+a*10000;

a=n%10;
n=n/10;
rev=rev+a*1000;

a=n%10;
n=n/10;
rev=rev+a*100;

a=n%10;
n=n/10;
rev=rev+a*10;

a=n%10;
rev=rev+a;

printf("%d",rev);
}
