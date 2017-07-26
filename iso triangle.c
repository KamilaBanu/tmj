#include <stdio.h>
#include <math.h>
int main(void)
{
    int n,i,j,c=0,b=0,k,x,y,z;
    int a;
    scanf("%d",&n);
for(i=n;i<50000;i++)
    {
a=sqrt(((i+1)*(i+1))+((i+2)*(i+2)));
for(j=n;j<50000;j++)
        {
if(a==j)
            {
                while(c<1)
                {
                x=i+1;
                y=i+2;
                z=j;
                c++;
                }
           
           
            }   
           
           
        }
    }
    if(x%2==0)
    {
   
        for(k=1;k<=x;k++)
             {
            if(x%k==0)
            {
                b++;
            }
    }
    }
    else
        for(k=1;k<=y;k++)
        {
            if(y%k==0)
            {
                b++;
            }
        }
       
    printf("%d",b);
    return 0;
}
