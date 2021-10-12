#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float b,h,area;
    printf("Please Enter The Value Of Breadth:");
    scanf("%f",&b);
    printf("Please Enter The Value Of Height:");
    scanf("%f",&h);
    area=(b*h)/2;
    printf("Area Of The Triangle Is %.2f\n",area);
    return 0;
}
