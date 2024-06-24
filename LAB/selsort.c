#include <stdio.h>

void selsort(int[], int);

int main() {
    int a[20] = {15,5,24,8,1,3};
    int n = 6;
    selsort(a,n);
    return 0;
}

void selsort(int a[20], int n) {
	int k;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
        for(k=0;k<n;k++)
        {
        	printf("%d ",a[k]);
        }
        printf("\n");
    }
}

