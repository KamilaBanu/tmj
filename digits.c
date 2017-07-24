#include<stdio.h>
void main()
{
    int n,c=0;
    printf("enter the number %d",n);
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("number of digits %d",c);
}
