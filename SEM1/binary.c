#include <stdio.h>

void main()
{
	int num,r,bin=0,bin1,rev=0,m=1;
	printf("enter num");
	scanf("%d",&num);
	while(num!=0)
	{
		r = num%2;
		bin = bin + r * m;
		m = m* 10;
		num = num/2;
	}
	printf("%d",bin);
	bin1 = bin;
	while(bin!=0)
	{
		r = bin%10;
		rev = rev* 10 + r;
		bin = bin/10;
	}
	if(bin1 == rev){
		printf("correct");
	}
	else {
		printf("not correct");
	}
}