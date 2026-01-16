#include <stdio.h>

int main() {
    printf(" enter first number \n");
    int x;
    scanf("%d",&x);
    printf(" enter second  number \n");
    int y;
    scanf("%d",&y);
    int greater;
    int f=1;
    int factor=1;

    if (x>y)
    {
      greater=y;  
    }
    else
    {
        greater=x;
    }
   for (int i = 1; i <=greater; i++)
   {
       if (x%i==0 || y%i==0)
       {
        f=f*i;
       }
     factor=factor*f;   
     


   }
   










    return 0;
}