#include <stdio.h>

int main(){
  char v= 'A'
  int* p= NULL;
  p =&v;

  printf("Address of v: %x\n",v);
  printf("Address stored in p: %x\n",v);
  printf("Address of p: %x\n",v);
  printf("Value of *p: %x\n",v);

  return 0;
}
