#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter three no:");
scanf("%d %d %d",&x,&y,&z);
if(x>y &&x>z)
printf(" %d is large",x);
if(y>x && y>z)
printf(" %d is large",y);
else
if(z>x&&z>y)
printf(" %d is large",z);
return 0;
}
