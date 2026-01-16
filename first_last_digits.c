#include <stdio.h>

int main() {
    int n, last;
    printf(" enter the number :");
    scanf("%d",&n);
    last = n%10;
    if (n<0)
    {
        n=-n;
    }
    
    while (n>=10)
    {
        n=n/10;

    }
   printf(" the last and first are %d \t  %d \n",last,n);
   
    

    return 0;
}