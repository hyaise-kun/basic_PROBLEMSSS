#include <stdio.h>

int main()
{
    int n;
    printf("enter number:\n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("new number is 0\n");
        return 0;
    }

    int temp = n;
    int digit = 0;

    // count digits
    while (temp != 0)
    {
        digit++;
        temp /= 10;
    }

    int last = n % 10;

    int power = 1;
    for (int i = 1; i < digit; i++)
        power *= 10;

    int first = n / power;
    int middle = n % power;
    middle /= 10;

    int newNum = (last * power) + (middle * 10) + first;

    printf("new number is %d\n", newNum);

    return 0;
}
