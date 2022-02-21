/*<br> 3.	Write a program find whether a number is a composite number. A Composite number has a factor other than
1 and itself
	<br> int input_number();
	<br> int is_composite(int n);
	<br> void output(int n, int composite);
	<br> input: 
	<br> 8
	<br> output:
	<br> 8 is a composite number.*/
#include <stdio.h>
int input_number()
{
  int n;
  printf("enter n value \n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int yes;
  if(n % 2 != 0)          //to find composite number we should divide with least prime number(2) should  not get remainder 1 
  {
    return yes;
  }
}
void output(int n, int composite)
{
  int yes;
  if(composite != yes)
  printf("%d is a composite number.",n);
  else
    printf("%d is a prime number",n);
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}
