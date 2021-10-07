#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0, num, sq;
    printf("Please Enter A Number\n");
    scanf("%d", &num);
    sq = num * num;
    while (sq > 0)
    {
        sum = sum + sq % 10;
        sq=sq/10;
    }
    if(sum==num)
    {
    printf("%d Is A Neon Number\n",num);
    }
    else
    {
    printf("%d Is Not A Neon Number\n",num);
    }
    return 0;
}
