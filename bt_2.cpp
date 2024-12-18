#include <stdio.h>

int main() {
    int array[5];

    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", array+i);
    }

    printf("\nCac phan tu trong mang la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}

