#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Cac phan tu trong mang: ");
    for (int index = 0; index < size; index++) {
        printf("%d ", array[index]);
    }

    printf("\nDo dai cua mang: %d", size);

    return 0;
}

