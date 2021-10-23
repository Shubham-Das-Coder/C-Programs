#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Method 1
    int a[5]={1,2,3,4,5};
    //Method 2
    int b[]={11,12,13,14,15};
    //Method 3
    int c[5];
    c[0]=21;
    c[0]=22;
    c[0]=23;
    c[0]=24;
    c[0]=25;
    //Method 4
    int d[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&d[i]);
    }
    return 0;
}
