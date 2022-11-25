#include<stdio.h>
#include<string.h>
void length(char []);
int main()
{
    char a[20];
    printf("enter a string: ");
    fgets(a,20,stdin);
    length(a);
    return 0;

}
void length(char b[])
{
    int i;
    for(i=0;b[i];i++)
    {
       printf("%d\n",b[i]);
    }
    
    
    printf("length of string is %d",i-1);
}