#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,t,n=5;
printf("enter number of elements\n");
scanf("%d",&n);
printf("enter elements of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("unsorted order of the array\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {

            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
printf("\n\n sorted order of the array\n");
for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }
getch();
}
