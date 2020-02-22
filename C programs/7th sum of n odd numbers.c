#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
printf("enter any number\n");
scanf("%d",&n);
printf("sum of %d even number is ",n);
for(i=1;i<=n;i++)
{
sum=sum+(2*i-1);
printf("\n%d",sum);
}
getch();
}
