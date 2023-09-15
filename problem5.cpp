#include <stdio.h>
#include <stdlib.h>

int sum_divisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int *find_Deficient(int start, int end, int *count)
{
    int *deficient = NULL;
    for (int i = start; i <= end; i++)
    {
        if (sum_divisors(i) < i)
        {
            (*count)++;
            deficient = (int *)realloc(deficient, (*count) * sizeof(int));
            deficient[(*count) - 1] = i;
        }
    }
    return deficient;
}

int main()
{
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    int count = 0;
    int *deficient = find_Deficient(start, end, &count);

    printf("Deficient numbers between %d and %d are: ", start, end);
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", deficient[i]);
    }
    free(deficient);
    return 0;
}