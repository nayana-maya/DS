#include<stdio.h>
int main()
{
 int arr[100],i,n,key,found=0;
 printf("Enter the limit:");
 scanf("%d",&n);
 printf("Enter the numbers:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter the element to be searched:");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
  if(arr[i]==key)
  {
   printf("Element found at the position %d",i+1);
   found=1;
   break;
  }
 }
 if (found==0)
 {
 printf("Element not found"); 
 }
}
