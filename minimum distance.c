#include <stdio.h>
#include <math.h> 
#define sq(x) ((x)*(x))
 
int main()
{
    int x, y, VA, VB;
    scanf("%d %d %d %d", &x, &y, &VA, &VB);
     
    if(x < 0 || y < 0 || VA < 0 || VB < 0)
        printf("Invalid Input\n");
    else
    {
        double d = x+y;
        double minD, z;
        while(1)
        {
            x = x - VA;
            y = y - VB;
            z = x*x + y*y;
            minD = sqrt(z);
 
            if(minD > d)
            {
                printf("%.11f\n", d);
                break;
            }
            d = minD;
        }
    }
    return 0;
}
