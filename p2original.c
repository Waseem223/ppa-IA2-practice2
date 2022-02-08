#include <stdio.h>
int input_side()
{
  int n;
  printf("enter side\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a, int b, int c)
{
  int scalen;
  if(a != b != c)
  {
    return scalen;
  }
}
void output(int a, int b, int c, int z)
{
  int scalen;
  if(return == scalen)
  {
    printf("the triangle is scalen triangle");
  }
  else{
    printf("the triangle is not scalen");
  }
}
int main()
{
  int a,b,c,z;
  a=input_side();
  b=input_side();
  c=input_side();
  z=check_scalene( a, b, c);
  output( a,  b,  c,  z);
    return 0;
  
  
}