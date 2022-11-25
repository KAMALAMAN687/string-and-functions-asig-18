#include<stdio.h>
#include<string.h>
void reverse(char b[]);
int main()
{
    char a[20];
    gets(a);
    reverse(a);

}
void reverse(char b[])
{
    int i;
    for(i=strlen(b);i>=0;i--)
    {
        printf("%c",b[i]);
    }

}