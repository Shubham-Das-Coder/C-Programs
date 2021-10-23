#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,rem;
    int seen[10]={0};
    printf("Please Enter The Number:");
    scanf("%d",&N);
    while(N>0)
    {
        rem=N%10;
        if(seen[rem]==1)
            break;
        seen[rem]=1;
        N=N/10;
    }
    if(N>0)
        printf("Yes");
    else
        printf("No");
    return 0;
}
