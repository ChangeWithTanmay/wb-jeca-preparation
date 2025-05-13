#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a=76;
    int* ptra = &a;
    printf("The vallue of a is %d\n", a);
    printf("The vallue of ptra is %x\n", ptra);
    printf("The vallue of *ptra is %d\n", *ptra);

    return 0;
}