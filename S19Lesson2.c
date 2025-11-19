#include <stdio.h>

void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;

    int *p = arr; 

    for (int i = 0; i < n; i++) {
        if (*(p + i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
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

    int evenCount, oddCount;
    countEvenOdd(arr, n, &evenCount, &oddCount);

    printf("So phan tu chan: %d\n", evenCount);
    printf("So phan tu le : %d\n", oddCount);

    return 0;
}

