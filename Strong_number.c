#include <stdio.h>

int main() {
    int n ;
    int sum=0;
    printf(" enter number \n");
    scanf("%d",&n);
    int original = n;
    while (n!=0)
    {
     int t = n%10;
     int f=1;
         for (int i = t; i; i--)
         {
            f=f*i;
         }
        sum = sum+f;
        n=n/10;
    }
     
  if (original==sum)
  {
    printf(" strong number\n");
    
  }
   else
   {
    printf(" not a strong number \n");
    
   }  
    return 0;
}