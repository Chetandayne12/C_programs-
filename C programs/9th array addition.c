#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("enter values of 1st matrics\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter values of 2nd matrics\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("sum of two matrics is\n");

for(i=0; i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}
}
printf("\n");
getch();
}
