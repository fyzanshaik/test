#include <stdio.h>

void main()
{
	int password;
	do {
		printf("Enter Password: ");
		scanf("%d",&password);
		if(password==1234){
			printf("Correct\n");
			break;
		}
		else {
			printf("Incorrect Password\n");
			continue;
		}
	}
	while(1);
	
}