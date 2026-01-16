#include <stdio.h>

int main() {
    int x,y,min,hcf;
    printf(" enter first number \n");
    scanf("%d",&x);
    printf(" enter second nmber \n");
    scanf("%d",&y);
    if (x>y)
    {
        min=y;
    }
    else
    {
        min=x;
    }
    while (min!=0)
    {
        if (x%min==0 && y%min==0)
        {
          hcf=min;
          break;
        }
        min--;

    }
    printf(" hcf of %d and %d is %d\n",x,y,hcf);
    
    

    return 0;
}