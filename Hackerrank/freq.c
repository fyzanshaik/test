#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];int length,i,count,temp,j;
     fgets(s, 1000, stdin);
     printf("%s",s);
     //a11472o5t6
     //0 2 1 0 1 1 1 1 0 0
    length = strlen(s);

    printf("length of string = %d\n",length);
    for(i=48;i<58;i++)
    {
        count = 0;
        for(j = 0;j<length-1;j++)
        {
           if(s[j]==i)
           {
               count++;
           }
        }
        printf("%d ",count);
    }
    printf("\n");


    return 0;
}
