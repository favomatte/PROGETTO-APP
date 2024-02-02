#include <stdio.h>
#input from stdin stream
int main()
{
    char string[20];
    printf("Enter the string: ");
    fgets(string,20,stdin);         #input from stdin stream
    printf("\nThe string is: %s", string);
    return 0;
}