#include<stdio.h>
#define n 10
int main(int argc, char const *argv[])
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("Please Enter The Input For Index %d :",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray Elements Are As Follows:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
