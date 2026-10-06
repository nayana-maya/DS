#include<stdio.h>
#define MAX 1000
int Parent[MAX];
void initialize(int n)
{
 for(int i=0;i<n;i++)
 {
 Parent[i]=i;
 }
}
int find(int x)
{
 while(x!=Parent[x])
 {
  x=Parent[x];
 }
 return x;
}
void union_set(int x, int y)
{
 int rootX=find(x);
 int rootY=find(y);
 if(rootX!= rootY)
 {
  Parent[rootX]=rootY;
 }
}
int connected(int x, int y)
{
 return find(x)==find(y);
}
int main()
{
 int n=10;
 initialize(n);
 union_set(1,2);
 union_set(3,4);
 union_set(2,3);
 printf("Are 1 and 4 connected? %s \n", connected(1,4)? "YES": "NO");
 printf("Are 1 and 5 connected? %s \n", connected(1,5)? "YES": "NO");
 return 0;
}
