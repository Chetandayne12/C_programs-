#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,odd;
printf("enter any number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
odd=2*i-1;
printf("\n%dst odd number is=%d",i,odd);
}
getch();
}
