#include <stdio.h>

int main(){

    char a = '4';
    char *ptr = &a;
    printf("%d\n", ptr);
    printf("%d\n", ptr+1); // Here add 1 size of a. int size is 4 bytes
    printf("%d\n", ptr+2); // Here add 2 size of a. int size is 8 bytes
    printf("%d\n", ptr-1);

    return 0;
}