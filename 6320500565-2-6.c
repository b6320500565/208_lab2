#include <stdio.h>
int main()
{
    int i;
    char n[20];
    scanf("%s",n);

    for(i=0;i<n[i];i++)
    {
        switch(n[i])
        {
            case '0' : printf("Zero"); break;
            case '1' : printf("One"); break;
            case '2' : printf("Two"); break;
            case '3' : printf("Three"); break;
            case '4' : printf("Four"); break;
            case '5' : printf("Five"); break;
            case '6' : printf("Six"); break;
            case '7' : printf("Seven"); break;
            case '8' : printf("Eight"); break;
            case '9' : printf("Nine"); break;
        }
        if(i<n[i+1])
        {
            printf("-");
        }
    }
}
