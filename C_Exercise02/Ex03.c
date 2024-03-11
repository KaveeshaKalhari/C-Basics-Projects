// Convert a lower case character to its upper and a upper case character to its lower.
// Use <ctype.h> header file
// Use toupper() and tolower()
// Eg: toupper(‘a’)-A
//     tolower(‘A’)-a

#include <stdio.h>
#include <ctype.h>

int main()
{
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (islower(letter))
    {
        printf("Uppercase: %c", toupper(letter));
    }
    else if (isupper(letter))
    {
        printf("Lowercase: %c", tolower(letter));
    }
    else
    {
        printf("This letter is not an alphabat letter.");
    }

    return 0;
}