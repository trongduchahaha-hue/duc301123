#include <stdio.h>

int findMax(int *arr, int n) {
    int max = *arr;          
    int *p = arr;            

    for(int i = 0; i < n; i++) {
        if(*(p + i) > max) { 
            max = *(p + i);
        }
    }

    return max;
}

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap %d phan tu:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxVal = findMax(arr, n);
    printf("Phan tu lon nhat la: %d\n", maxVal);

    return 0;
}

