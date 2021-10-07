#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,n,b=0,t;
    printf("Please Enter A Number\n");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        a=n%10;
        b=b+(a*a*a);
        n=n/10;
    }
    if(b==t)
    {
        printf("%d Is An Armstrong Number\n",t);
    }
    else
    {
        printf("%d Is Not An Armstrong Number\n",t);
    }
    return 0;
}
