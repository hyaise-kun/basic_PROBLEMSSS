#include <stdio.h>
#include <math.h>

int main() {
    int n,digit;
printf(" enter your number :\n");
scanf("%d",&n);
 digit = log10(n)+1;
printf(" number of digits is %d\n",digit); 
    return 0;
}