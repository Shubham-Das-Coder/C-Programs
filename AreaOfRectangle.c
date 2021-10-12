#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float l,b,area;
    printf("Please Enter The Length Of Rectangle:");
    scanf("%f",&l);
    printf("Please Enter The Breadth Of Rectangle:");
    scanf("%f",&b);
    area=(l*b);
    printf("Area Of Rectangle Is %.2f",area);
    return 0;
}
