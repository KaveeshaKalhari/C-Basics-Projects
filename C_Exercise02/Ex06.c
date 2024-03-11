// Convert a character to its ASCII value.

#include <stdio.h>

int main (){
    char ch;

    printf("Enter a character:");
    scanf("%c", &ch);

    int ascii_value = ch;

    printf("The ASCII value of %c = %d", ch, ascii_value);

    return 0;
}