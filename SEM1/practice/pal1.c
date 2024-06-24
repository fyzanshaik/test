#include <stdio.h>
#include <string.h>

void main()
{
	char s[50],s1[50];
	int l,i;
	gets(s);
	strcpy(s1,s);
	strrev(s1);
	l = strcmp(s,s1);
	if(l == 0){
		printf(" pal");
	}
	else 
		printf("not pal");
}