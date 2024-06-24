#include <stdio.h>

void main()
{
	int arr[50] = {1,2,3,4,5},sum=0,sum1,mean,variance,i;
	int n = 5;
	for(i=0;i<n;i++){
		sum += arr[i];
	}
	printf("%d",sum);
}