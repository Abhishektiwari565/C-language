#include<stdio.h>

int main() {
    int choice;
    int a, b;

    while(1) {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 0)
            break;

        printf("Enter a: ");
        scanf("%d", &a);

        printf("Enter b: ");
        scanf("%d", &b);

        switch(choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", a, b, a+b);
                break;

            case 2:
                printf("Subtraction of %d and %d is %d\n", a, b, a-b);
                break;

            case 3:
                printf("Multiplication of %d and %d is %d\n", a, b, a*b);
                break;

            case 4:
                printf("Division of %d and %d is %d\n", a, b, a/b);
                break;

            case 5:
                printf("Modulus of %d and %d is %d\n", a, b, a%b);
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    printf("\nProgram Ended.\n");

    return 0;
}

