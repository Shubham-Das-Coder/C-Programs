#include <stdio.h>
int main()
{
    int i = 10;
    float f = 3.14;
    char c = 'A';
    int *i_ptr = &i;
    float *f_ptr = &f;
    char *c_ptr = &c;
    printf("Value of I : %d\n", *i_ptr);
    printf("Value of F : %f\n", *f_ptr);
    printf("Value of C : %c\n", *c_ptr);
    return 0;
}