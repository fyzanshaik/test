#include <stdio.h>
#include<string.h>  

void main()
{
	int vandan[50],i,n;
	printf("Enter number of elements you want to insert: ");
	scanf("%d",&n);
	// vandan = { , , };
	printf("Enter values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&vandan[i]);
	}
	printf("{");
	for(i = 0; i < n; i ++){
		printf("%d ",vandan[i]);
	}
	printf("}");
}	