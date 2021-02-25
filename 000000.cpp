#include <cstdio>

int main()
{
    int w,h;
	scanf("%d %d",&w,&h);
	int arr[w][h];
	int tmp;
	for(int i=0;i<w;i++)
	{
	    for(int j=0;j<h;j++)
		{
			scanf("%d",&arr[i][j]);
		}	
	}
	for(int i=0;i<w;i++)
	{
	    for(int j=0;j<h;j++)
		{
			scanf("%d",&tmp);
			arr[i][j]=arr[i][j]+tmp;
		}	
	}
	for(int i=0;i<w;i++)
	{
	    for(int j=0;j<h;j++)
		{
			printf("%d ",arr[i][j]);
		}	
		printf("\n");
	}
	return 0;
	
} 
