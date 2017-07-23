#include <stdio.h>
int energy[1000][1000];
int atom[1000][1000];
int a[1000];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        atom[i][i] = a[i];
    }
    for(int j = 1 ; j < n ; j++)
    {
        for(int i = 0 , k = j ; i < n && k < n ; i++,k++)
        {
            for(int l = i , r = i + 1 ; r <= k ; r++,l++)
            {
                if(energy[i][l] + energy[r][k] + atom[i][l] * atom[r][k] >= energy[i][k])
                {
                    energy[i][k] = energy[i][l] + energy[r][k] + atom[i][l] * atom[r][k];
                    atom[i][k] = (atom[i][l] * atom[r][k]) % 199;
                }
            }
        }
    }
    printf("%d\n",energy[0][n-1]);
    return 0;
}
