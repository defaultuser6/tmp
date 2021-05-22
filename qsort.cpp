#include <cstdio>
#include<cstring>
using namespace std;
struct stu
{
  int s;
  char n[100];
};
bool _cmp(stu a,stu b)
{
  if(a.s==b.s)
  {
    return 0<strcmp(a.n,b.n);
  }
  return a.s>b.s;
}
int max(int* start,int* end )
{
  int tmp=*start;
  while(end>start)
  {
    tmp=*start>tmp?*start:tmp;
    start++;
  }
  return tmp;
}
stu min(stu* start,stu* end )
{
  stu tmp=*start;
  while(end>start)
  {
    tmp=_cmp(*start,tmp)?*start:tmp;
    start++;
  }
  return tmp;
}


void sort_stu(stu* arr,stu *end)
{
  int size=end-arr;
  stu tmp[100];
  if(2>size)return;
  stu *arr1=arr;
  sort_stu(arr,arr+size/2);
  int s1=size/2;
  int s2=end-(arr+size/2+1);
  stu *arr2=arr+size/2+1;
  sort_stu(arr+size/2+1,end);
  if(_cmp(min(arr1,arr1+s1),min(arr2,arr2+s2)))
  {
    memcpy(tmp,arr1,s1);
    memcpy(arr1,arr2,s2);
    memcpy(arr2,tmp,s1);
  }
  
  
}
int main()
{
  int n;
  scanf("%d",&n);
  stu arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%s %d",arr[i].n,&arr[i].s);
  }
  sort_stu(arr,arr+n);
  for(int i=0;i<n;i++)printf("%s %d\n",arr[i].n,arr[i].s);
}
