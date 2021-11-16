#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,fact=1;
    printf("Please Enter A Number Greater Than Zero\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The Factorial Of %d Is %d\n",n,fact);
    return 0;
}
