#include<stdio.h>
int main()
{
 int arr[100],i,n;
 printf("Enter the limit:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Even numbers are:\n");
 for(i=0;i<n;i++)
 {
  if(arr[i]%2==0)
  {
   printf("%d \n",arr[i]);
  }
 }
 printf("Odd numbers are:\n");
 for(i=0;i<n;i++)
 {
  if(arr[i]%2!=0)
  {
   printf("%d \n",arr[i]);
  }
 }
}
