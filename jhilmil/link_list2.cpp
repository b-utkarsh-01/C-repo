#include <stdio.h>

int main() {
    int size, i, newElement;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter the elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // At the beginning
    printf("Insert the new element at the beginning: ");
    scanf("%d", &newElement);
    size++;
    for (i = size - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = newElement;

    // At the end
    printf("Insert the new element at the end: ");
    scanf("%d", &newElement);
    size++;
    a[size - 1] = newElement;

    // At any position
    int index, element;
    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &index);
    printf("Enter the new element: ");
    scanf("%d", &element);
    size++;
    for (i = size - 1; i >= index; i--) {
        a[i] = a[i - 1];
    }
    a[index] = element;

    printf("Resultant array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
