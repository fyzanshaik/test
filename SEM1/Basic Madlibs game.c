#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20], pluralNoun[20] ,celebrityF[20], celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural Noun: ");
    scanf("%s", pluralNoun);

    printf("Enter a celebrity's name: ");
    scanf("%s%s", celebrityF, celebrityL);
//If there is only one name for celebrity this program would not work properly without the last name!
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);



    return 0;
}