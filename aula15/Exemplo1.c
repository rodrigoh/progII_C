#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  //Declarando uma variável do tipo inteiro
  int valor = 10;
  //Declarando um ponteiro (armazena endereços de memória)
  int *ponteiro;
  //Atribuindo o endereço de valor para ponteiro 
  ponteiro = &valor;

  printf("\nO valor de 'valor' é %d",valor);
  printf("\nO valor de 'ponteiro' é %x",ponteiro);
  printf("\nO endereço de memória da variável 'valor' é %x",&valor);
  printf("\nO valor armazenado onde 'ponteiro' aponta %d",*ponteiro);
  return 0;

}