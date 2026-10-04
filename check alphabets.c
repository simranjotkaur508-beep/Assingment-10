#include<stdio.h>
int main()
{
    char ch;
    printf("enter a number");
    scanf("%d",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("upper case");
    }

    else

    if(ch>='a'&&ch<='z')

    {
        printf("lower case");
    }

    else

    if(ch>='0'&&ch<='9')
    {
        printf("digits");
    }

    else
    {
        printf("specal character");
    }

    return 0;
}