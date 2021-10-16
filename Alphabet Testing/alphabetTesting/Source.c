/**
 * C program to check whether a character is alphabet or not
 */

#include <stdio.h>

#define MAXLENGTH 30

int main() {
    char ch[MAXLENGTH];

    /* Input a character from user */
    printf("Enter any character: ");
    scanf_s("%s", ch, MAXLENGTH);

    for (int i = 0; ch[i] != '\0'; i++) {
    if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
    //if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
    {
        printf("%c YES.\n", ch[i]);
    }
    else
    {
        printf("%c NO.\n", ch[i]);
    }
}

    return 0;
}