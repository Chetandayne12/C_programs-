#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem;
int i=2;
printf("enter value of n");
scanf("%d",&n);
while(i<=n)
{
rem=n%i;
if(rem==0)
{
    printf(" prime number\n");
}
else
{
    printf(" not prime number\n");

}
i++;
}

getch();
}
