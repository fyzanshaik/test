#include <stdio.h>

void main()
{
	int n[50][50],n1[50][50],i,j,n2[50][50];
	int num=3;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			scanf("%d",&n1[i][j]);
		}
	}
	
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			n2[i][j] = n[i][j] + n1[i][j];
		}
	}
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			printf("%d",n2[i][j]);
		}
		printf("\n");
	}
}