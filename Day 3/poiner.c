#include <stdio.h>
// Pointer is a variable, which store address of another variable.
// %x ---> Hexa Decimal number.
// %p ---> Pointer
// int* newVariable = &variable; (Pointer)
// %d ---> Integer value.
int main(){

    printf("Let's Learn about Pointer\n");
    // int a=76;
    // int* ptra = &a;
    // // printf("The value of a is %d\n", a);
    // // printf("The value of ptra is %x\n", ptra); // %x -> Hexa Decimal.
    // // printf("The value of *ptra/a is %d\n", *ptra);
    // printf("The address of pointer of a is %p\n", &ptra); // %p -> Pointer
    // printf("The address of a is %p\n", &a);
    // printf("The address of a is %p\n", ptra);
    // printf("The value of a is %d\n", *ptra); // %p -> Pointer

    // Todo val point to apple
    int apple = 52;
    int* val = &apple;

    printf("Apple is %dkg\n", *val);
    printf("Broker Notebook Apple address is %p", val);
    if(val == &apple){
        printf("\nBoth address is same");
    } else {
        printf("Not same address..");
    }
    
    // apple value and val is same or not.
    if(apple==*val){
        printf("\nApple Value is same.");
    } else {
        printf("\nApple Value is not same.");
    }

    return 0;
}