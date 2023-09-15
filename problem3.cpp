#include<stdio.h>
#include<string.h>
void swap(char *a, char *b){
    char c;
    c=*a;
    *a=*b;
    *b=c;
}
void order(char *s, int l){
    int i, j;
    for (i=0; i<l; i++)
        for (j=i+1; j<l; j++){
            if (s[i]>s[j]) swap((s+i), (s+j));
        }
    for (i=0; i<l; i++) printf("%c", s[i]);
}

int main()
{
    char s[1000];
    scanf("%[^\n]*%c", s);
    int l=strlen(s);
    order(s, l);
    return 0;
}