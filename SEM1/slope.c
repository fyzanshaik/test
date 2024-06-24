#include<stdio.h>
#include<math.h>
void main()
{
	float x1,y1,x2,y2,m,c,distance;
	printf("Enter co-ordinates for the first point: ");
	scanf("%f %f", &x1,&y1);
	printf("Enter co-ordinates for the second point: ");
	scanf("%f %f", &x2,&y2);
	m = (y2-y1)/(x2-x1);
	c = y1 - (m * x1);
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Equation of the line = y = %fx + %f",m,c);
	printf("\ndistance between 2 given points : %f\n",sqrt(distance));

}





	
