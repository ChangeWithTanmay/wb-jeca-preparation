#include <stdio.h>
    
int main()
{
    int arr[]={112,21,3,4,5,6};
    printf("Value at position 3of the array is %d\n", arr[3]);
    printf("The Address of 1st element of the array is %d \n", &arr[0]);
    printf("The Address of 1st element of the array is %d \n", arr);
    printf("The Address of 2nd element of the array is %d \n", &arr[1]);
    printf("The Address of 2nd element of the array is %d \n", arr+1);


    printf("The value at Address of 1st element of the array is %d \n", *(&arr[0]));
    printf("The value at Address of 1st element of the array is %d \n", *(arr));
    printf("The value at Address of 2nd element of the array is %d \n", *(&arr[1]));
    printf("The value at Address of 2nd element of the array is %d \n", *(arr+1));

    return 0;
}