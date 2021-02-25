#include <cstdio>
using namespace std;
int main()
{
    int w,h,C,K;
    w=5;
    h=5;
	int arr[w][h];
	int tmp;
	for(int i=0;i<w;i++)
	{
	    for(int j=0;j<h;j++)
		{
			scanf("%d",&arr[i][j]);
		}	
	}
	scanf("%d %d",&C,&K);
	C=C-1;
	K=K-1;
	for(int i=0;i<w;i++)
	{	
		if(i==C)
		{
			for(int j=0;j<h;j++)
			{
				printf("%d ",arr[K][j]);
			}
			printf("\n");
			continue;
		}
		if(i==K)
		{
			for(int j=0;j<h;j++)
			{
				printf("%d ",arr[C][j]);
			}
			printf("\n");
			continue;
		} 
	    for(int j=0;j<h;j++)
		{
			printf("%d ",arr[i][j]);
		}	
		printf("\n");
	}
	return 0;
	
} 
