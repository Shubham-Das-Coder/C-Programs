#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i=1,sum=0;
    printf("Please Enter A Number\n");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
           sum=sum+i;
           i++;
    }
    if(sum==n)
       printf("%d Is A Perfect Number\n",i);
    else
       printf("%d Is Not A Perfect Number\n",i);   
    return 0;
}
