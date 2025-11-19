#include <stdio.h>

void average(int *arr, int n, float *result) {
    int sum = 0;
    int *p = arr;

    for (int i = 0; i < n; i++) {
        sum += *(p + i);    
    }

    *result = (float)sum / n;
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

    float avg;
    average(arr, n, &avg);

    printf("Gia tri trung binh cua mang: %.2f\n", avg);

    return 0;
}

