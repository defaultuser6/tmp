#include <cstdio>
using namespace std;
int main()
{
    int n,x,y,w,h;
    scanf("%d %d %d",&n,&x,&y);
    w=n;
    h=n;
	for(int i=0;i<w;i++)
	{	
	    for(int j=0;j<h;j++)
		{
			if(i+1==x)
			{
				printf("(%d,%d) ",i+1,j+1);
			}
		}	
	}
	printf("\n");
	for(int i=0;i<w;i++)
	{	
	    for(int j=0;j<h;j++)
		{
			if(j+1==y)
			{
				printf("(%d,%d) ",i+1,j+1);
			}
		}	
	}
	printf("\n");
	for(int i=0;i<w;i++)
	{	
	    for(int j=0;j<h;j++)
		{
			if(i-j==x-y)
			{
				printf("(%d,%d) ",i+1,j+1);
			}
		}	
	}
	printf("\n");
	for(int i=w-1;i>=0;i--)
	{	
	    for(int j=0;j<h;j++)
		{
			if(i+j+2==x+y)
			{
				printf("(%d,%d) ",i+1,j+1);
			}
		}	
	}
	return 0;
}
