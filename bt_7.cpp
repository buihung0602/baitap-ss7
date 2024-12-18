#include <stdio.h>

int is_odd(int num) {
    return num % 2 != 0;
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
            if (is_odd(arr[i])) {
                break;
            } else {
                printf("Phan tu phai la so le, vui long nhap lai: ");
            }
        }
    }

    printf("Mang da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

