#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three no:");
scanf("%d %d %d",&a,&b,&c);
if(a>= b &&a>= c)
printf(" a is large");
if(b>= a && b>= c)
printf(" b is large");
else
if(c<=a&&c<=b)
printf(" c is large");
return 0;
}
