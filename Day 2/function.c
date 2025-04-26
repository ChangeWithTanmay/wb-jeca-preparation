#include <stdio.h>

// #Factorial -> 5*4*3*2*1
int factorial(int n)
{
    int i, mul = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            mul *= i;
        }
    }
    return mul;
}

int main()
{

    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    printf("%d Factoral is: %d", num, factorial(num));

    return 0;
}