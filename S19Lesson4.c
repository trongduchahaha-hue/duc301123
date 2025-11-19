#include <stdio.h>

int countValue(int *arr, int n, int x) {
    int count = 0;
    int *p = arr;   

    for (int i = 0; i < n; i++) {
        if (*(p + i) == x) {   
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    int result = countValue(arr, n, x);

    printf("So lan xuat hien cua %d la: %d\n", x, result);

    return 0;
}

