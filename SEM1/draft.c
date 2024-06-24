#include<stdio.h>
void main()
{
	for (int i = 1; i < 6; ++i)
	{
		for (int j = 1; j < 6; ++j)
		{
			if (i == 1 || i == 5)
			{
				printf("5 ");
			}
			if (i == 2 || i ==4)
			{
				if (j == 1 || j == 5)
				{
					printf("5 ");
				}
				else 
				{
					printf("4 ");
				}
			}
			if (i == 3)
			{
				if (j == 1 || j == 5)
				{
					printf("5 ");
				}
				else if (j == 2 || j == 4)
				{
					printf("4 ");
				}
				else
				{
					printf("3 ");
				}
			}
		}
		printf("\n");
	}
}