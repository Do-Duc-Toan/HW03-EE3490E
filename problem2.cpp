#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void frequency(char *s, int l){
    int c[256]={0};
    for (int i=0;i<l;i++){
        int ascii=(int)(s[i]);
        c[ascii]++;
    }
    for (int i=0; i<256; i++){
        if (c[i]>0)
        printf("\nthe frequency of %c is %d", i, c[i]);
        }
} 
int main()
{
    char s[1000];
    scanf("%[^\n]*%c", s);
    int l=strlen(s);
    frequency(s, l);
    return 0;
}