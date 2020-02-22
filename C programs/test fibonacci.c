#include<stdio.h>
#include<conio.h>
int main()
{
int n,c;
int a=0,b=1;
printf("enter any number\n");
scanf("%d",&n);
printf("%d\n",a);
printf("%d\n",b);

for(int i=1;i<=n-2; i++)
{
c=a+b;
a=b;
b=c;
printf("%d \n",c);
}

getch();
}
