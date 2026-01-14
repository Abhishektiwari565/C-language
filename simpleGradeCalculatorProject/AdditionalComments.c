#include <stdio.h>

int main() {
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
        case 9:
            printf("Excellent work!");
            break;

        case 8:
            printf("Well done!");
            break;

        case 7:
            printf("Good job!");
            break;

        case 6:
            printf("You passed, but you could do better.");
            break;

        default:
            printf("Sorry, you failed.");
    }

    return 0;
}

