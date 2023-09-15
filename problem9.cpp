#include<stdio.h>
#include<stdlib.h>

void input(int *a, int n){
    for (int i=0; i<n; i++){
        printf("a[%d] = ", i);
        scanf("%d", a+i);
    }
}
void output(int *a, int n){
    for (int i=0; i<n; i++){
        printf ("%d  ", a[i]);
    }
}

int square(int a){
    return a*a;
}
void callback(int *a, int n, int (*function)(int)){
    for (int i=0; i<n; i++){
        a[i]=function(a[i]);
    }
}

int main()
{
    int n;
    printf("enter the number of array elements n = ");
    scanf("%d", &n);
    int *a;
    a = (int*)calloc(n, sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed.\n");
        exit(0);
    }
    input(a, n);
    callback(a, n, square);
    printf("the square of array elements: ");
    output(a, n);
    free(a);
    return 0;
}

