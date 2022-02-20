// Exercise 1 - Calculations
#include <stdio.h>
int main()
{
  int marks, tot= 0, i;
  float avg = 0;

for(i=0 ; i <2 ;i++)
{
  printf("Enter the marks : ");
  scanf("%d",&marks);
  tot = tot + marks;

}
avg = tot / 2;
printf("Average is : %.2f",avg);

return 0;  
  
}



