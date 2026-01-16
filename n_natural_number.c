#include <stdio.h>

int main() {
    int a;
    printf("the natural number :\n");
    scanf("%d",&a);
    int i=1;
    while (i<=a)
    {
     printf("  %d\t" ,i);
     i++;
    }
}