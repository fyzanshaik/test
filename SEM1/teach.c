#include <stdlib.h>

void main()
{
	int mark;
	printf("Enter marks of student: ");
	scanf("%d",&marks);
	if (mark>= 90){
		printf("A");
	}
	else if (marks < 90 && marks >= 80)
	{
		printf("B")
	}
	else if (marks < 80 && marks >= 70)
	{
		printf("C");
	}
	else 
		printf("FAIL\n");
}