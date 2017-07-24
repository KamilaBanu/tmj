#include <stdio.h>

int main(void) {
int i,t1,t2,j=0,count=0,n;
scanf("%d %d %d",&t1,&t2,&n);
int a[711],b[711];
if((t1>0)&&(t1<t2)&&(t2<1000000))
{
for(i=1;i<=710;i++)
{a[i]=(2*i*i)-i;
}
for(i=1;i<=710;i++)
{
    if((a[i]>=t1)&&(a[i]<=t2))
    {
    
        {
            b[j]=a[i];
            j++;
        }
}
}
if(j>(n-1))
printf("%d",b[n-1]);
else
printf("No number is present at the index");
}
else
{
	printf("Invalid input");
}
return 0;

}
