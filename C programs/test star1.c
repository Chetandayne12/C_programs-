#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
printf("enter any number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j>=1;j--)
{
printf("* ");
}
printf("\n");
}
getch();
}
