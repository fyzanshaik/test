#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;int i=0,s1,j;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    s1 = strlen(s);
    for(i = 0;i <=s1;i++)
    {
       if(*(s+i)!= 32)
       {
           printf("%c",*(s+i));
       }
       else{
           printf("\n");
            }

    }

    return 0;
}
