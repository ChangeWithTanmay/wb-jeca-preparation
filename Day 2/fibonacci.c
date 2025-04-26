#include <stdio.h>

// Enter value 15
// 0 1 2 3 5 8 13 
int fibonacci(int terms) {
    int a = 0, b = 1, nextTerm;
    for (int i = 0; i < terms; i++) {
        
            printf("%d ", a);
            nextTerm = a + b;
            a = b;
            b = nextTerm;
            // if(nextTerm>terms){
            //     printf("%d ", nextTerm);
            //     break;
            // }      
    }
    printf("\n");
}

int main(){
    int num;
    printf("Enter num ber of range :");
    scanf("%d", &num);
    // call Function.
    printf("Fibonacci: %d", fibonacci(num));
    return 0;
}