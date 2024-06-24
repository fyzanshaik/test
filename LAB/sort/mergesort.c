#include <stdio.h>

void merge(int a[], int first, int mid, int last, int b[]);
void mergesort(int a[], int start, int end, int b[]);

int main() {
    int a[] = {39, 42, 7, 6, 32, 1, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int b[n]; // Temporary array for merging

    mergesort(a, 0, n - 1, b);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void merge(int a[], int first, int mid, int last, int b[]) {
    int i = first;
    int j = mid + 1;
    int k = first;

    while (i <= mid && j <= last) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements from the first subarray
    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }

    // Copy the remaining elements from the second subarray
    while (j <= last) {
        b[k] = a[j];
        j++;
        k++;
    }

    // Copy elements back to the original array
    for (int x = first; x <= last; x++) {
        a[x] = b[x];
    }
}

void mergesort(int a[], int start, int end, int b[]) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergesort(a, start, mid, b);
        mergesort(a, mid + 1, end, b);
        merge(a, start, mid, end, b);
    }
}

