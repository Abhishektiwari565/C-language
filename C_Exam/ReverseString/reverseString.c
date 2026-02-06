//3.Write a C program that defines a function to reverse a string
// without using any library functions.
#include <stdio.h>

void reverseString(char str[]) {
    int i = 0, j = 0;
    char temp;

    while (str[j] != '\0') {
        j++;
    }
    j--; 
    
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

void main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s", str);

}

