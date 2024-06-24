#include <stdio.h>

int main()
{
	int remainder,number,reverse,copy;
	printf("Enter number to reverse: \n");
	scanf("%d",&number);
	printf("Given Number: %d",number);	
	reverse = 0;
	copy = number;
	while (number!=0) {
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number = number / 10;
	}
	printf("\nReverse of the given number: %d\n",reverse);

	if (copy == reverse) 
		printf("\nYes the given number is  a palindrome!\n");
	else 
		printf("\nNo the given number is not palindrome\n");
	return 0;
		
	
}