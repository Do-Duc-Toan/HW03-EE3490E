#include<stdio.h>
int count(int n){
    if (n==0) {
        return 0;
    }
    return 1 + count(n/10);
}

int sumdigits(int n, int s){
    if (n>0){
        int d=n%10;
        s+=d;
        return sumdigits(n/10, s);
    }
    if (n==0) 
        return s;
}

int main()
{
    int n, s=0;
    printf("Enter n = ");
    scanf("%d", &n);
    printf("the number of digits of %d is %d", n, count(n));
    printf("\nthe sum of digits is %d", sumdigits(n, s));
    return 0;
}