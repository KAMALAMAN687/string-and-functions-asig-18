#include<stdio.h>
int main()
{
    char a[20];
    int i,l=0;
    fgets(a,20,stdin);
    for(i=0;a[i];i++)
    {
        if(a[i]==32||a[i]==10)
        {
            l++;
        }
    }
    printf("no. of words in a string is %d",l);

}