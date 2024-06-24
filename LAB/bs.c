#include <stdio.h>

void binarySearch(int[], int, int, int);

int main() {
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int target = 7;
    binarySearch(a, 0, n - 1, target);
    return 0;
}

void binarySearch(int a[20], int first, int last, int key) {
    int mid;
    int flag = 0;

    while (first <= last) {
        mid = (first + last) / 2;

        if (a[mid] == key) {
            printf("%d has been found at %d index\n", key, mid);
            flag = 1;
            break; 
        } else if (a[mid] < key) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }

    if (flag == 0) {
        printf("%d not found in the array.\n", key);
    }
}

