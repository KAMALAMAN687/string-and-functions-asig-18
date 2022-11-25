#include<stdio.h>
#include<string.h>
void palindrome(char a[]);
int main()
{
    char a[20];
    gets(a);
    palindrome(a);
    return 0;
}
void palindrome(char a[])
{
    char b[20];
    int i,j;
    strcpy(b,a);
    for(i=0,j=strlen(b)-1;i<(strlen(a)/2)&&j>=(strlen(b)/2);i++,j--)
    {
        if(a[i]==b[j])
        {

        }
        else
        {
            printf("string is not palindrome");
            return;
        }
       
    }
    printf("string is palindrome");

    
    
}
