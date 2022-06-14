#include <stdio.h>

void mostraCalcFormatado(int valor){
  printf("o valor da nossa conta é %i \n", valor);
  return ;
}


int calculoComplicado(int a, int b){
  return a+b;
}



int main() {
  int primeiroValor, segundoValor, resultado;
  primeiroValor = 5;
  segundoValor = 8;


  resultado = calculoComplicado(primeiroValor, segundoValor);
  mostraCalcFormatado(resultado);

  return 0;
}