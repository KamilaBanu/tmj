#include <stdio.h>

int main(void)
{
	int n, h, b;
	int arr[100][100];
	int i,j,a=0;
	int z=1;
	/* enter the size */
	scanf("%d",&n);b=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
	}h=n*n;
	while(z<=h)
	{//printf("while1");
		for(j=a;j<=b;j++)
		{
			arr[a][j]=z;//printf("for1");
			z++;
		}
		for(j=a+1;j<=b;j++)
		{
			arr[j][b]=z;//printf("for2");
			z++;
		}
		for(j=b-1;j>=a;j--)
		{
			arr[b][j]=z;
			z++;//printf("for4");
		}
		for(j=b-1;j>=a+1;j--)
		{
			arr[j][a]=z;
			z++;printf("for3");
		}a++;b--;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
