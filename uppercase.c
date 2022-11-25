#include<stdio.h>
#include<string.h>
void uppercase(char b[]);
void lowercase(char b[]);
int main()
{
    char a[20];
    
    fgets(a,20,stdin);
    
    uppercase(a);
    lowercase(a);
    return 0;

}
void uppercase(char b[])
{
    printf("%s",strupr(b));

}
void lowercase(char b[])
{
    printf("%s",strlwr(b));

}