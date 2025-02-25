#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{

    /*
    // Write a program to calculate of rectangle.

    int hight, width;
    printf("Enter Number of hight:");
    scanf("%d",&hight);
    printf("Enter Number of width:");
    scanf("%d",&width);
    int sizeOfRectangle = hight*width;
    printf("Size of Rectangle :%d",sizeOfRectangle);


    // Take a number(n) from  user & output its cube(n*n*n)
    int n;
    printf("Please Enter of cude side N:");
    scanf("%d",&n);
    printf("Cube size: %d", n*n*n);
    */

    // Arithmetic Inctructions
    /*
     // pow function use
     int power = pow(7,2); // pow come for -> #include <math.h>
     printf("%d\n",power);

     // Moduler operator -> %
     int module = 11%3;
     printf("%d", module); // 8/7 remeder 1
     // modulo operator work in integer(int).


    // Type Conversion

    // int op int -> int
    printf("%d\n", 2 * 3);
    // int op float -> float
    printf("%f\n", 2 * 3.13);
    // float op float -> float
    printf("%f\n", 2.4 * 3.2);


    int a=(int) 1.999999;
    printf("%d",a);

   int b = 4+9*10; // 94
   int a = 4*3/6*2; // 4
   // ((4*3)/6)*2
   // (12/6)*2
   // 2*2
   // 4
*/

    /*
   printf("%d\n", 4==4); // 1 -> true
   printf("%d\n", 4==3); // 0 -> Falsh
   */

    /*
     int x;
     printf("Enter number:");
     scanf("%d", &x);
     printf("%d", x / 2 == 0 );

// int x; int y = x; // valid
// int x, y=x; // valid state
char stars = '**';
// printf("%d\n", x);
// printf("%d\n", y);
printf("%c\n", stars);
    printf("%d\n", 8 ^ 8); // vaild state
*/

    /*
    int isSunday = 0;
    int isSnowing = 1;
    int isMonday = 1;
    int isRaining = 0;
    // printf("%d\n", isSunday && isSnowing);
    printf("%d\n", isMonday || isRaining);
    

    // if any number 9 < x <100
    int num;
    printf("Enter Number is:");
    scanf("%d", &num);
    printf("%d", 9 < num && num < 100);
    */
/*
    // write a  program to print the average number of 3.
    int num1, num2, num3;
    printf("Enter number:");
    scanf("%d, %d, %d", &num1, &num2, &num3);
    printf("%f", (float)(num1+num2+num3)/3);
*/

    // Write a program to check if given character is digit or not.
    /*
    char inputChar;
    printf("Input  char: ");
    scanf("%c", &inputChar);  // -128 to 127
    printf("Your input char is:%c, and : %d", inputChar ,-129 < inputChar && inputChar < 128);
    */

    // C. Write a program to print the smallest number of two.
    /*
     int num1, num2;
     printf("Enter number:");
     scanf("%d, %d", &num1, &num2);
     printf("%d is small, reasion %d", num2, num1 > num2);
     printf("%d is small, reasion %d", num1,num1 < num2);
     */
    /*
     int a=10/3;
     printf("%d\n", a);

     printf("%d\n", 7&3);
     printf("%d\n", 5<<1);
     printf("%d\n", !(1 && 0));
     */
    // int a=5;
    // printf("%d\n", 5 == 5 == 1);
    // int a;
    // a=(1,2,4,3,9);
    // printf("%d\n", a);

    // printf("%d\n", 3*2/(2-2));
    // printf("%d\n", 7 & 3);
    // printf("%d\n", 3>2>1);
    // int a;
    // printf("%d",'A');
    long int a=1000000000;
    printf("%ld\n",a);
    printf("Maximum value for long int: %ld\n", LONG_MAX);
    
    long long int large_number = 9223372036854775807; // Maximum value
    printf("The large number is: %lld\n", large_number); // Note the %lld format specifier

    return 0;
    // 21474 83647
}