#include<stdio.h>

void main()
{
    int n=5,k=4,i,j,max1,max2,max3,c1,c2,c3;
    max1 = 0;
    max2 = 0;
    max3 = 0;
    for(i=1;i<=n;i++)
    {
        for(j = i + 1;j <=n;j++)
        {
            c1 = i & j;
            if(c1>=max1 && c1 < k)
                max1 = c1;
            c2 = i | j;
             if(c2>=max2 && c2<k)
                max2 = c2;
            c3 = i ^ j;
             if(c3>=max3 && c3 < k)
                max3 = c3;
        }
    }
    if(max1 > k)
    {
        max1 = 0;
    }
    if(max2 > k)
    {
        max2 = 0;
    }
    if(max3 > k)
    {
        max3 = 0;
    }

    printf("max = %d\n",max1);
    printf("max = %d\n",max2);
    printf("max = %d\n",max3);



}
