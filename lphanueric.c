#include<stdio.h>
#include<string.h>
void alpha(char a[]);
int main()
{
    char a[20];
    gets(a);
    alpha(a);


}
void alpha(char a[])
{
    int i,l=0,m=0;
    for(i=0;a[i];i++)
    {
        if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
        l++;
        if(a[i]>=48&&a[i]<=57)
        m++;
    }
    if(l>=1&&m>=1)
    {
        printf("given string is ALPHANUMERIC ");
    }
    else
    {
        printf("given string is not alphanumeric");
    }


}