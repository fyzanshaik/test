#include<stdio.h>
#include<windows.h>

int main()
{
	int number,i;
	int d = 1000;
	printf("Enter number you want to countdown from: \n");
	scanf("%d",&number);
	for(i=number;i>=0;i--){
		printf("T-Minus: %d",i);
		Sleep(d);
		system("cls");
		printf("\a");
	}

	printf("COUNTDOWN FINISHED!\n");
}