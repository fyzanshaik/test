#include <stdio.h>

void main()
{
	int num,i,count=0;
	printf("enter num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if (num % i == 0){
			count ++;
		}
	}
	if (count == 2){
		printf("Yes prime");
	}
	else {
		printf("not prime");
	}
}