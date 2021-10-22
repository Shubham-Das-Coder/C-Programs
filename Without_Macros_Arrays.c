#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("Please Enter The Input For Index %d :",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray Elements Are As Follows:\n");
    for(i=0;i<10;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
