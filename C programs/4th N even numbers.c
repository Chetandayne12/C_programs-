#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,even;
printf("enter any number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
even=2*i;
printf("\n%d even number= %d",i,even);
}
getch();
}
