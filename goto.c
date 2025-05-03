#include <stdio.h>
    
int main()
{
    label:
     printf("We are inside label");
     goto end;
    printf("hello wrold");
    goto label;
    end:
     printf("\nWe are go to end.");

    return 0;
}