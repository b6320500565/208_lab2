#include <stdio.h>
int main()
{
    int day,x;
    char emo;
    scanf("%c",&emo);
    scanf("%d",&day);

    x = (int)emo - day;
    if(day%10==5)
    {
        printf("%c",92);
    }
    if(x%2!=0)
    {
        if((int)emo >=65&&(int)emo<=73)
            printf("(^_^)");
        else if((int)emo >=74&&(int)emo<=82)
            printf("(*o*)");
        else if((int)emo >=83&&(int)emo<=90)
            printf("(T_T)");

    }
    else if(x%2==0)
    {
        if((int)emo >=65&&(int)emo<=73)
            printf("{@_@}");
        else if((int)emo >=74&&(int)emo<=82)
            printf("{*v*}");
        else if((int)emo >=83&&(int)emo<=90)
            printf("{x_x}");
    }

    if(day%10==5)
    {
        printf("/");
    }

}
