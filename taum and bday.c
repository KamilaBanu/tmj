#include <stdio.h>

int main(void) {
   long int t,w,b,x,y,z,p,q;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&b,&w);
        scanf("%ld %ld %ld",&x,&y,&z);
        p=b*x;
        q=w*y;
        if(x==y)
        {
            printf("%ld\n",p+q);
        }
        else if(x<y)
        {
            if((x+z)<y)
            printf("%ld\n",w*x+w*z+p);
            else
            printf("%ld\n",p+q);
        }
        else
        {
            if((y+z)<x)
            printf("%ld\n",b*y+b*z+q);
            else
            printf("%ld\n",p+q);
        }

    }

    return 0;
}
