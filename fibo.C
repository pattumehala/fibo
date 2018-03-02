#include<stdio.h>
int main()
{
int i,n,z;
int x=0,y=1;
printf("\nEnter the number:");
scanf("%d",&n);
printf("%d\t",y);
for(i=2;i<=n;i++)
{
z=x+y;
x=y;
y=z;
printf("%d\t",z);
}
return 0;
}
