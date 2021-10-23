#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][3]={1,2,3,4,5,6};
    int b[2][3]={{11,12,13},{21,22,23}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
    for(int x=0;x<2;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("%d\n",b[x][y]);
        }
    }
    return 0;
}
