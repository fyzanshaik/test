#include <stdio.h> //Start this program while taking input from keyboard and dispay output on monitor
#include <stdlib.h>

void main()
{
	int a[50],i,min,max;
	int n=5;
	for(i=0;i<n;i++){
        scanf("%d",&a[i]);
	}
	max = a[0];
	for(i=0;i<n;i++){
        if(max < a[i]){
            max = a[i];
        }
	}
	min = a[0];
	for(i=0;i<n;i++){
        if(min <= a[i]){
            max = a[i];
        }
	}
	for(i=0;i<n;i++){
        printf("%d\t",a[i]);
	}
	printf("max = %d min = %d",max,min);

}


