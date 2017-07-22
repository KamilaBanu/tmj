#include<stdio.h>
int main()
{
    int a[100],i,j=0,k,n,t=0,result,ans=1,rem[100],m[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0&&a[i]<=199)
        {
            printf("INVALID INPUT\n");
            return 0;
 
        }
    }
        if(n%2==0)
        {
            for(i=0;i<n;i++)
            {
               m[j]=(a[i])*(a[i+1]);
               rem[j]=(m[j])%199;
               j++;i++;
            }
            for(k=0;k<j;k++)
            {
                ans=ans*(rem[k]);
                t=t+(m[k]);
            }
            result=ans+t;
            printf("%d",result);
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i+1]!='\0')
                {
                    m[j]=a[i]*a[i+1];
                    rem[j]=m[j]%199;
                    j++;i++;
                }
                else
                {
                    m[j]=a[i+1];
                    rem[j]=a[i]%199;
                    j++;i++;
                }
            }
            for(k=0;k<j;k++)
            {
                ans=ans*(rem[k]);
                t=t+(m[k]);
            }
            result=ans+t;
            printf("%d",result);
        }
return 0;
}
