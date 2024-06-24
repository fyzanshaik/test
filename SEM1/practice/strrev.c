#include <stdio.h>
#include <string.h>

void main()
{
	char name[50];
	gets(name);
	strrev(name);
	puts(name);
}