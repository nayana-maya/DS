#include<stdio.h>
int main()
{
 int mark;
 printf("Enter the mark of the student:");
 scanf("%d",&mark);
 if( mark >= 90)
 {
  printf("Grade A");
 }
 else if(( mark >= 80) && (mark < 90))
 {
  printf("Grade B");
 }
 else if(( mark >= 70) && (mark <80))
 {
  printf("Grade c");
 }
 else if(( mark >= 60) && (mark <70))
 {
  printf("Grade D");
 }
 else if(( mark >= 50) && (mark <60))
 {
  printf("Grade E");
 }
 else if(mark <50)
 {
  printf("Failed");
 }
}
