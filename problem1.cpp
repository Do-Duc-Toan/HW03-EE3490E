#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    char *p;
    int vow=0, cons=0;
    printf("Enter the string: ");
    scanf("%[^\n]%*c", s);
    p=s;
    while (*p!='\0'){
        if(*p==65 || *p==69 || *p==73 || *p==79 || *p==85 ||
		*p==97 || *p==101 || *p==105 || *p==111 || *p==117)  
        {
            vow++;
        }
        else if((*p>=65 && *p<=90) || (*p>=97 && *p<=122))
        {
            cons++;
        }
        p++;
    }
	printf("Total Vowels = %d\n", vow);
    printf("Total Consonants = %d\n", cons);
    return 0;
}
