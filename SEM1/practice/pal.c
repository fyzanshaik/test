#include <stdio.h>
#include <string.h>
void main()
{
	char s[50];
	int l,i;
	gets(s);
	l = strlen(s);
	//checking pal:
	for(i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-i-1])
		{
			printf("not palindrome");
			break;
		}

	}
	if(i == l/2)
		printf("palindrome");
}