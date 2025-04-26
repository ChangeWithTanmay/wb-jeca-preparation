#include <stdio.h>
#include <math.h>

int primeNum(int num)
{
    int i;
    for (i = 2; i <= sqrt(num); i++)
    {
        if ((num % i) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    // TODO: Check number is Prime number?
    // Do Playing sqrt
    // Than start for 2, to number of sqrt.
    // than chan value is divid or not.
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(primeNum(num)){
        printf("%d is not prime number", num);
    }
    else{
        printf("%d is prime number", num);
    }
    return 0;
}