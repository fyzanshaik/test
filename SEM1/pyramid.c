#include <stdio.h>

void main()
{
	int i,n,count=0,j;
	printf("Enter number to : ");
	scanf("%d",&n);
	for(i=5;i>0;i--){
		for (j=5-i;j>0;j--){
			printf(" ");
		}
		for (j=i;j>0;j--){
			printf("%d",j);
		}
		
		// for (j=2;j<=i;j++){
		// 	printf("%d",1);
		// }
		printf("\n");
		
	}
	


	}