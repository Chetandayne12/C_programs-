#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("a is big=%d",a);
else
printf("c is big =%d",c);
}
if(b>c)
{
if(b>a)

printf("b is big=%d",b);
else
printf("c is big=%d",c);

}
getch();
}
