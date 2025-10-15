//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Output: %s\n", str);
    return 0;
}