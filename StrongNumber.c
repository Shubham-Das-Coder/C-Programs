#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,i,p,r,sum=0,savenum;
    printf("Please Enter A Number\n");
    scanf("%d",&num);
    savenum=num;
    while(num)
    {
        i=1,p=1;
        r=num%10;
    while (i<=r)
    {
        p=p*i;
        i++;
    }
    sum=sum+p;
    num=num/10;
    }
    if (sum==savenum)
    {
        printf("%d Is A Strong Number",savenum);
    }
    else
    {
        printf("%d Is Not A Strong Number",savenum);
    }
    return 0;
}
