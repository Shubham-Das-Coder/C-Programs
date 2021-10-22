/*
  1
  3  5
  5  7  9
  7  9 11 13
  9 11 13 15 17
  */
  #include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,t;
    for(i=1;i<=5;i++)
    {
        t=i-1;
        for(j=1;j<=i;j++)
        {
            printf("%3d",t+i);
            t=t+2;
        }
        printf("\n");
    }
    return 0;
}
