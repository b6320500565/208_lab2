#include <stdio.h>
int main()
{
    int number[3];
    int i, tmp;
    for(i=0; i<3; i++)
    {
        scanf("%d", &number[i]);
    }
    i = 0;
    do
    {
        if(i < 3-1 && number[i] > number[i+1])
        {
            tmp = number[i+1];
            number[i+1] = number[i];
            number[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }

    }while(i < 3);
    char word[3];
    gets(word);
    if(!strcmp("ABC",word))
        printf("%c%c%c",number[0],number[1],number[2]);
    else if(!strcmp("ACB",word))
        printf("%c%c%c",number[0],number[2],number[1]);
    else if(!strcmp("BAC",word))
        printf("%c%c%c",number[1],number[0],number[2]);
    else if(!strcmp("BCA",word))
        printf("%c%c%c",number[1],number[2],number[0]);
    else if(!strcmp("CAB",word))
        printf("%c%c%c",number[2],number[0],number[1]);
    else if(!strcmp("CBA",word))
        printf("%c%c%c",number[2],number[1],number[0]);
    else
        printf("ERROR");
}
