#include<stdio.h>
int input()
{
    int a;
    printf("enter the numbers \n");
    scanf("%d",&a);
    return a;
}
int gcd(int a,int b)
{
    int i,gcd;
    for(i=a<b?a:b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            break;
        }
    }
    return gcd;
}
void output(int a,int b,int ans)
{
    printf("the hcf of %d and %d is %d",a,b,ans);
}
int main()
{
    int a,b,ans;
    a=input();
    b=input();
    ans=gcd( a, b);
    output(a, b,ans);
    return 0;
}