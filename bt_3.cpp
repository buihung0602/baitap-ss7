#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5}; 
    int hasEven = 0;

    printf("Cac phan tu la so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) { 
            printf("%d ", array[i]);
            hasEven = 1;
        }
    }

    if (!hasEven) {
        printf("Mang khong chua so chan ");
    }

    printf("\n");
    return 0;
}

