#include <stdio.h>

void main()
{
    int a[50],i,temp,low,high,size;
    scanf("%d\n",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    low = 0;
    high = size -1;
    while(low<=high)
    {
        temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;high--;
    }
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }

}
