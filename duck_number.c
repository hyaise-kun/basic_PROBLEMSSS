#include <stdio.h>

int main()
{
    int n;
    printf(" enter number: ");
    scanf("%d", &n);
    int i = 0;
    while (n>0)
    {
        if (n % 10 == 0)
        {
            i++;
           break;
        }
        n = n / 10;
    }
     
    if (i)
        {
            printf(" duck number\n");
        }

        else
        {
            printf(" not a duck number \n");
        }

        return 0;
    
}
#include <stdio.h>

int main() {
    printf(" \n");
    
    return 0;
}