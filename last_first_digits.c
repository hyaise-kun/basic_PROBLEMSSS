#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf(" enter the number\n");
    scanf("%d",&n);
    int t = log10(n)+1;
    int temp=n%10;
    n=n/(pow(10,t-1));
    printf(" the last digit is %d and first digit is %d \n",temp,n);
    
    return 0;
}



