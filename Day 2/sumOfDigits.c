#include <stdio.h>

// Some  of Digit, means 123 => 1+2+3 = 6

int someOfDigit( int num){
    int i, sum=0, value, sumDigit=0;
    for(i=0; i<num; i=i*10){
        if(num <= i){
            break;
        }
        sum=sum+1;
        value = num%10;
        num = num/10;
        sumDigit=sumDigit+value;
    }

    
    return sumDigit;
}

// Optimize wey Sum of digit.

int someOfDigitOptimize (int num){
    int value, sum=0;
    while (num>0)
    {
        value = num % 10;
        num = num / 10;
        sum += value;
    }

    return sum;
}

int main(){

    int num;
    printf("Enter any positive number :");
    scanf("%d", &num);
    // Call the funtion;
    printf("Sum of Digit of %d Number, ans is %d ", num, someOfDigit(num));
    return 0;
}