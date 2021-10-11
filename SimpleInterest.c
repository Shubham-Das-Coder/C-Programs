#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float p,t,i,r;
    printf("Please Enter The Principal Amount(In Rupees):");
    scanf("%f",&p);
    printf("Please Enter The Rate Of Interest:");
    scanf("%f",&r);
    printf("Please Enter The Time(In Years):");
    scanf("%f",&t);
    i=(p*r*t)/100;
    printf("Interest is %0.2f",i);
    return 0;
}
