#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int num;
    double x;
    printf("Please Enter A Number\n");
    scanf("%d",&num);
    x=sqrt(num+1);
    if((int)x==x)
    {
        printf("%d Is A Sunny Number\n",num);
    }
    else
    {
        printf("%d Is Not A Sunny Number\n",num);
    }
    return 0;
}
