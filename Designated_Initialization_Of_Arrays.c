#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={[0]=1,[5]=2,[6]=3}; //Storing 1 at 0, 2 at 5, 3 at 6, and rest will be assigned 0
    for(int i=0;i<10;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
