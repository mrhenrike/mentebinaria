#include <stdio.h>
#include <stdbool.h>

int main(void){
  bool b;
  //char c;

  //c = 0; //false
  //c = 1; //true
  b = false;
  //b = false;

  printf("O tamanho de b (boolean) eh: %lu\n", sizeof b);
  printf("O valor de b eh: %i\n", b);
  return 0;
}  
