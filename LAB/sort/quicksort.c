#include <stdio.h>

void quicksort(int[], int, int);
int partition(int[], int, int);

int main() {
    int a[20] = {7,6,10,5,9,2,1,15,7};
    int n = 7;
    quicksort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void quicksort(int a[20], int first, int last) {
    int j;
    if (first < last) {
        j = partition(a, first, last);
        quicksort(a, first, j - 1);
        quicksort(a, j + 1, last);
    }
}

int partition(int a[20], int first, int last) {
    int pivot = a[first];
    int start = first + 1;
    int end = last;
    int temp;

    while (1) {
        while (start <= end && a[start] < pivot) {
            start++;
        }
        while (a[end] > pivot) {
            end--;
        }
        if (start>end) {
            break;
        }
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }

    a[first] = a[end];
    a[end] = pivot;

     for (int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return end;
}
