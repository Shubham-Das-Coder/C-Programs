#include<stdio.h>
int main(int argc, char const *argv[])
{
    float radius,area;
    printf("Please Enter The Radius Of The Circle:");
    scanf("%f",&radius);
    area=22*radius*radius/7;
    printf("Area Of The Circle Is:%.4f",area);
    return 0;
}
