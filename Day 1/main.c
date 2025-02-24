#include<stdio.h>

int main(){

    // Write a program to calculate of rectangle.
    int hight, width;
    printf("Enter Number of hight:");
    scanf("%d",&hight);
    printf("Enter Number of width:");
    scanf("%d",&width);
    int sizeOfRectangle = hight*width;
    printf("Size of Rectangle :%d",sizeOfRectangle);
    
    return 0;
}