#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
printf("enter a value\n");
scanf("%d",&n);
printf("sum of %d even numbers is",n);
for(i=1;i<=n;i++)
{
sum=sum+(2*i);

printf("\n%d",sum);
}
getch();
}
