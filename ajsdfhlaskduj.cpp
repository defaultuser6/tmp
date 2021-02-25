#include <cstdio>
using namespace std;
int main()
{
    int w,h;
    scanf("%d %d",&w,&h);
	int arr[w][h];
	int sum;
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
			if(i==0||j==0||i==w-1||j==h-1)
			{
				sum+=arr[i][j];
			}
		}	
	}
	printf("%d",sum);
	return 0;	
}
