#include <stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x=a+b+c;
    if(a>=0&&a<=30,b>=0&&b<=30,c>=0&&c<=40)
    {
    if(x>=80)
    printf("A");
    else if(x<80&&x>=75)
    printf("B+");
    else if(x<75&&x>=70)
    printf("B");
    else if(x<70&&x>=65)
    printf("C+");
    else if(x<65&&x>=60)
    printf("C");
    else if(x<60&&x>=55)
    printf("D+");
    else if(x<55&&x>=50)
    printf("D");
    else
    printf("F");
    }
}


