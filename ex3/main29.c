#include <stdio.h>

int main(){
  int *ip;
  int var =10;
  ip =&var;

  printf("1......%p\n",ip);
  printf("2......%p\n",*ip);

  return 0;
}
