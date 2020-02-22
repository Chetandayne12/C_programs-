#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,sum=0;
printf("enter value of a and b\n");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}
