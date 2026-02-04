#include <stdio.h>

int main() {
    char str[50];
    int i, j;

    printf("Enter string: ");
    scanf("%s", str);

    for (j = 0; str[j] != '\0'; j++);

    j = j - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("Not Palindrome");
            return 0;
        }
    }

    printf("Palindrome");
    return 0;
}

