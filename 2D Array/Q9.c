#include <stdio.h>

//3. Write a C program to Insert, Delete, and update operations of the element into the array.
int main() {
    int arr[100], n, i, pos, val, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Choose operation: 1-Insert 2-Delete 3-Update: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter position to insert (0 to %d) and value: ", n);
        scanf("%d %d", &pos, &val);
        for(i = n; i > pos; i--)
            arr[i] = arr[i-1];
        arr[pos] = val;
        n++;
    } 
    else if(choice == 2) {
        printf("Enter position to delete (0 to %d): ", n-1);
        scanf("%d", &pos);
        for(i = pos; i < n-1; i++)
            arr[i] = arr[i+1];
        n--;
    } 
    else if(choice == 3) {
        printf("Enter position to update (0 to %d) and new value: ", n-1);
        scanf("%d %d", &pos, &val);
        arr[pos] = val;
    }

    printf("Updated array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

