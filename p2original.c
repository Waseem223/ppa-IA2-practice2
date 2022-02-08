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
  int isscalene;
  if(a !=b)
  {
    if(a != c)
    {
      if(b != c)
      {
        return isscalene;
      }
    }
  } 
}  
void output(int a, int b, int c, int z)
{
  int isscalene,not;
  if(z == isscalene)
  {
    printf("the triangle is  scalen triangle");
  }
  else{
    printf("not scalen triangle");
  }
}
int main()
{
  int a,b,c,z;
  a=input_side();
  b=input_side();
  c=input_side();
  z=check_scalene( a, b, c);
  output( a,  b,  c, z);
    return 0;
  
  
}