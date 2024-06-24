


#include <stdio.h>

int main() {
    int a[50] = {3, 2, 6, 9, 4, 1};
    int i, j, temp,k;

    for (i = 0; i < 6; i++) {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = temp;
        for (k = 0; k < 6; k++) {
        printf("%d ", a[k]);
    }
    printf("\n");
    }

    for (i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
