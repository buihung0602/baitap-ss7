#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap so hang cua mang: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Nhap cac phan tu cho mang 2 chieu:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu o vi tri [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Mang 2 chieu da nhap la:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
