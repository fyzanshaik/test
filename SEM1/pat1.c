#include <stdio.h>

void main()
{
	int i,n,count=0,j;
	printf("Enter number to : ");
	scanf("%d",&n);
	for(i=1;i<4;i++){
		for (j=1;j<5;j++){
			if(j==1 || j ==4){
				if (i==1 || i ==3){
					printf("1");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
		
	 }

	}