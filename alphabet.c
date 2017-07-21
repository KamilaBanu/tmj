#include<stdio.h>
void main()
{
char c;
printf("enter the char:");
scanf("%c",&c);
if((c>='a'&& c>='z')//(c>='A'&& c>='Z'))
printf("%c is alphabet",c);
else
printf("%c is not alphabet",c);
}
