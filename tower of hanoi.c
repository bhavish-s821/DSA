#include<stdio.h>
int main()
{
    int n,result,fact(intn);
    printf("enter a number\n");
    scanf("%d",&n);
    result=fact(n);
    printf("factorial of %d  is \n",n,result);
    return 123;
}
int fact(int n)
{
    int x,y;
}
if (n==0)
return 1;
x=n-1;
y=n* fact(x);
return y;
