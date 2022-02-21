/*<br> 4.	Write a program to find Sum of composite number in an array of numbers different containing numbers entered by the user.
	<br> int input_array_size();
	<br> void input_array(int n, int a[n]);
	<br> int sum_composite_numbers(int n, int a[n]);
	<br> void out_put(int sum);
	<br> input:
	<br> 1 2 7 8 12
	<br> output:
	<br> 208 */
#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter n value \n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i=0;
  printf("enter numbers");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
  int i=0,sum=0;
  for(i=0;i<n;i++)
    {
      if(a[i] % 2 != 0)
      {
        sum=sum+a[i];
      }
    }
  return sum;
}
void out_put(int sum,int n,int a[n])
{
  int i;
  printf("the sum of composite numbers");
  for(i=0;i<n-1;i++)
    printf("%d,",a[i]);
  printf("%d is %d",a[n-1],sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum_composite_numbers(n,a);
  out_put(sum,n,a);
  return 0;
}

