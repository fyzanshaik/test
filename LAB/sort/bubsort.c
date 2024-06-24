#include <stdio.h>

void bubbleSort(int a[], int n) {
    int i, j, temp, swapped,k;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; 
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1; 
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int i;
    int a[50] = {15,5,24,8,1,3,16,20};
    int n = 8;

    bubbleSort(a, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

