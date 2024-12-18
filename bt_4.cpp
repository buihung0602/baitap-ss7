#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap so phan tu cua mang (lon hon 0): ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("So phan tu phai lon hon 0. Vui long nhap lai!\n");
        }
    } while (n <= 0);

    int arrayInt[n];

    for (int index = 0; index < n; index++) {
        printf("Nhap gia tri cho phan tu arrayInt[%d]: ", index);
        scanf("%d", &arrayInt[index]);
    }

    printf("\nCac phan tu trong mang la: ");
    for (int index = 0; index < n; index++) {
        printf("%d ", arrayInt[index]);
    }
    return 0;
}
