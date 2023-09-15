#include<stdio.h>
#include<string.h>
int if_char_exists(char c, char p[],  int x, int y[])
{
	int i;
	for (i=0; i<=x;i++)
	{
		if (p[i]==c)
		{
		y[i]++;
		return 1;
		}
	}
	if(i>x) return 0;
}
int main()
{
	char s[80],chr[80];
	int n,i,x,ctr[80];
	printf("Enter a string: ");
	scanf("%[^\n]*%c", s);
	n=strlen(s);
	chr[0]=s[0];
	ctr[0]=1;
	x=0;
	for(i=1; i<n; i++)
	{
		if(if_char_exists(s[i], chr, x, ctr)==0)
		{	
			x++;		
			chr[x]=s[i];
			ctr[x]=1;
		}
	}
	printf("The count of each character in the string %s is \n", s);
	for (i=0;i<=x;i++)
		printf("%c\t %d\n",chr[i],ctr[i]);
    return 0;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
	int ch_fre[255];
    int i = 0, max;
    int ascii;
	
       printf("\n\nFind maximum occurring character in a string :\n");
       printf("--------------------------------------------------\n"); 	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);

    for(i=0; i<255; i++)  //Set frequency of all characters to 0
    {
        ch_fre[i] = 0;
    }

    //Read for frequency of each characters
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        ch_fre[ascii] += 1;
        i++;
    }
    max = 0;
    for(i=0; i<255; i++)
    {
        if(i!=32)
        {
        if(ch_fre[i] > ch_fre[max])
            max = i;
        }
    }	
    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, ch_fre[max]);
}*/