#include <stdio.h>

void linearSearch(int[] ,int ,int);

void main()
{
	int a[20]= {5,3,7,2,8,0,1,7,9,3};
	int n = 10;
	int target = 7;
	linearSearch(a,n,target);
}

void linearSearch(int a[20],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("%d has been found at %d index\n",key,i);
			break;
		}
	}
	if(i==n){
		printf("Target is not present inside the array\n");
	}
}
