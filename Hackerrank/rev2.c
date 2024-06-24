#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,low,high,temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    low = 0;
    high = num -1;
    while(low<=high)
    {
        temp = *(arr + low);
        *(arr + low) = *(arr + high);
        *(arr + high) = temp;
        low++;high--;
    }


    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
