#include<stdio.h>
int abundant(int n){
    int s=0;
    for (int i=1; i<=n/2; i++){
        if (n%i==0) {
            s=s+i;
        }
    }
    return s;
}

int main()
{
    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    if (abundant(n)>n) printf("%d is an abundant number", n);
    else printf("%d is not an abundant number", n);
    return 0;
}