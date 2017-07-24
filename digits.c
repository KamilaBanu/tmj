#include<stdio.h>
void main()
{
    int a,c=0;
    printf("enter the number %d",a);
    scanf("%d",&a);
    while(a>0)
    {
        a=a/10;
        c++;
    }
    printf("number of digits %d",c);
}
