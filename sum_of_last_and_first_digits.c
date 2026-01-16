#include <stdio.h>

int main() {
  int v ,last;
  printf(" enter number :");
  scanf("%d",&v);
  last = v%10;
  while (v>=10)
  {
    v=v/10;
  }
  
  printf(" sum is %d\n",v+last);
  
  
  return 0;
}