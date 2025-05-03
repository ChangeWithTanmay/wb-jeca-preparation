#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main()
{
    // char str[] = {'T', 'a', 'n', 'm', 'a', 'y'}; // --> It is not valid String
    // char str[] = {'T','a', 'n', 'm', 'a', 'y', '\0'}; // --> But it is valid Sting.

    // char str[7] = "tanmay";  // -->  Null terminated char array.

    char str[34];
    printf("Enter String Name :");
    // Strore string value use 'gets()'
    gets(str);

    // printStr(str);
    printf("Using printf %s\n", str);
    printf("Using Puts :");
    puts(str); // Using Puts, to store value.
    return 0;
}