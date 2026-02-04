#include <stdio.h>

void cube(int *p) {
    int i;
    for(i = 0; i < 4; i++) {
        printf("%d ", (*(p+i)) * (*(p+i)) * (*(p+i)));
    }
}

int main() {
    int a[2][2], i, j;

    printf("Enter elements:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Cube elements:\n");
    cube(&a[0][0]);

    return 0;
}

