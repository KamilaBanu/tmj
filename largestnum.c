#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three no:");
scanf("%d %d %d",&a,&b,&c);
if(a>b &&a>c)
printf(" %d is large",a);
if(b>a && b>c)
printf(" %d is large",b);
else
if(c>a&&c>b)
printf(" %d is large",c);
return 0;
}
