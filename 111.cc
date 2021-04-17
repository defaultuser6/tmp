#include <cstdio>
#include <cstdlib>
#include <ctime>
#include<Windows.h>
using namespace std;
int main()
{
	int *s=(int*)malloc(4*10000);
	int n=0;
	while(1)
	{
		int tmp;
		tmp=getc(stdin);
		if(tmp==EOF) break;
		s[n]=tmp;
		n++;
	}
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	{
		printf("%c",s[i]);
		Sleep(50);
	}
}
