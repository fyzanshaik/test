#include <stdio.h>

void main()
{
	int a[50],n,i,j,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(min > a[i])
		{
			min = a[i];
		}
	}
	printf("max = %d min = %d",max,min);

}