#include <stdio.h>

int main()
{
    int n;
    printf(" enter number :\n");
    scanf("%d", &n);
    for (int j = n; j > 0; j--)
    {       int sum = 0;
        for (int i = 1; i <=j/2; i++)
        {
            if (j % i == 0)
            {
                sum = sum + i;
            }
        }
        if (j == sum)
        {
            printf(" perfect number are %d \n", sum);
        }
    }
    return 0;
}



