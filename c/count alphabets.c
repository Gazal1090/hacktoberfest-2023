#include <stdio.h>
#include <string.h>
void main(){
    int i,c=0,d=0,e=0,f=0,l;
    char s[100];
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>=97 && s[i]<=123)
        c++;
        else if(s[i]>=65 && s[i]<=90)
        d++;
        else if(s[i]>=48 && s[i]<=57)
        e++;
        else
        f++;
    }
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
}