#include<stdio.h>
int main()
{
 int arr[5],i,n,sum=0;
 printf("Enter the limit:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The elements are:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",arr[i]);
 }
 for(i=0;i<n;i++)
 {
  sum+=arr[i];
 }
 printf("Sum of the elements in the array is %d", sum);
 return 0;
}
