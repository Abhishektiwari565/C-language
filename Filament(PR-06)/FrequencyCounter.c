#include <stdio.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter string: ");
    scanf("%s", str);

    
    for (j = 0; str[j] != '\0'; j++);

    j = j - 1;

   
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("Not Palindrome\n");
            break;
        }
    }

    if (i >= j)
        printf("Palindrome\n");

    printf("\nCharacter Frequency:\n");

    for (i = 0; str[i] != '\0'; i++) {

        count = 1;

        if (str[i] == '0')
            continue;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0';
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}

