#include <stdio.h>

int main(void){
  unsigned char c;
  signed char d;

  printf("O tamanho de c eh: %lu bytes / %lu bits\n", sizeof c, sizeof c * 8);
  printf("O tamanho do tipo char eh: %lu\n", sizeof(char));
  printf("O tamanho do tipo int eh: %d\n", sizeof(int));
  
  c = 255;
  d = 10;
  d = 0xa;
  d = '\n';

  printf("Valor de c: %i\n", c);
  printf("Valor de d: %i\n", d);
  return 0;
}
