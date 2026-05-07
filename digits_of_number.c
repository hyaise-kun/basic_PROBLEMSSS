#include <stdio.h>
#include <math.h>  // we  need to add maths library to use log function , if using loop method , no need to add it .

int main() {
    int n,digit=0;
printf(" enter your number :\n"); 
scanf("%d",&n);
 // digit = log10(n)+1;  // log is useful but super realiable , cause of neagative numbers and floating round offs .
    while (n>0){
        n = n/10;
        digit++;
    }
printf(" number of digits is %d\n",digit); 
    return 0;
}
