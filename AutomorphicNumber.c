#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,num;
    long int sq;
    int r;
    int t;
    int equal;
    printf("Please Enter A Number\n");
    scanf("%d",&n);
    num=n;
    sq=n*n;
    t=10;
    printf("Square Of %d Is %ld\n",n,sq);
    while (n>0)
    {
        r=sq%t;
        if (num==r)
        {
            equal=1;
            break;
        }
        n=n/10;
        t=t*10;  
    }
    if (equal==1)
    {
        printf("%d Is An Automorphic Number",num);
    }
    else
    {
        printf("%d Is Not An Automorphic Number");
    }
    return 0;
}
