#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int sum = 0;
    printf(" enter number \n");
    scanf("%d",&n);
    int digit = (int)log10(n)+1;
       int original =n;
    

    while (n>0)
    {
    int t = n%10;
    int z =(int)pow(t,digit);
    sum= sum+z;
    n=n/10;
    }

    if (sum==original)
    {
      printf(" armstrong number \n");
      
    }
    else
    {
        printf(" not strong \n");
        
    }
    
    
    

    return 0;
}