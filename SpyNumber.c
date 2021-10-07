#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,num,sum=0,prod=1,lastdigit;
    printf("Please Enter A Number\n");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        lastdigit=n%10;
        sum=sum+lastdigit;
        prod=prod*lastdigit;
        n=n/10;
    }
    if(prod==sum)
    {
        printf("%d Is A Spy Number\n",num);
    }
    else
    {
        printf("%d Is Not A Spy Number\n",num);
    }
    return 0;
}
