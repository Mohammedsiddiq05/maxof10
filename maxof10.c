#include<stdio.h>
int main()
{
int a[10],i,max;
for(i=0;i<10;i++)
{
printf("\nenter the number:");
scanf("%d",&a[i]);
printf("\n%d",a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\nthe max number is:%d",max);
return 0;
}
