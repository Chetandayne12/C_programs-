#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,x,sum,r=0;
printf("enter any number\n");
scanf("%d",&n);
printf("enter digit is =%d\n",n);
a=n%10;
while(n>0)
{
    r=r*10;
    r=r+n%10;
    n=n/10;
}
x=r%10;
sum=x+a;
//printf("reverse of enter number is=%d \n",r);
printf("sum is %d",sum);
getch();
}
