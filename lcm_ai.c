#include <stdio.h>

int main() {
    int x,y,max,lcm;
    printf(" enter first number \n");
    scanf("%d",&x);
    printf(" enter second nmber \n");
    scanf("%d",&y);
    if (x>y)
    {
        max=x;
    }
    else
    {
        max=y;
    }
    while (1)
    {
        if (max%x==0 && max%y==0)
        {
          lcm=max;
          break;
        }
        max++;

    }
    printf(" lcm of %d and %d is %d\n",x,y,lcm);
    
    

    return 0;
}