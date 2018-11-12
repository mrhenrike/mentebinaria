#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void){
  int i = INT_MAX;
  unsigned int j = UINT_MAX;
  uint32_t h = UINT_MAX;
  long long m = LLONG_MAX;
  size_t k = 0;
  register int p = 0;

  i++; //i = 1 + 1 ou i += 1

  printf("O tamanho de i(int) eh: %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
  printf("Valor de i: %d\n", i);
  printf("Valor de j: %u\n", j);
  printf("Valor de m: %llu\n",m);
  printf("Valor de k: %zu\n",k);
  printf("Tamanho registrador int p: %zu bytes / %zu bits\n", sizeof p, sizeof p * 8);

  return 0;
}
