#include<stdio.h>
#include<string.h>
void compare(char b[], char c[]);
int main()
{
    char a[20],b[20];
    gets(a);
    gets(b);
    compare(a,b);


}
void compare(char b[], char c[])
{
    int l;
  l= strcmp(b,c);
  if(l==-1)
  {
    printf("dictionary order");
  }
  if(l==0)
  {
    printf("same string");
  }
  if(l==1)
  {
    printf("opposite of dictionary order");
  }


}