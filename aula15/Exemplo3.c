#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  //Declaração de um ponteiro
  char *p;
  //Alocação de memória para um char (1byte)
  p = (char*) malloc(sizeof(char));

  printf("Digite uma letra: ");
  //Lembrando que p é um ponteiro, então não precisa o &
  scanf("%c",p);

  printf("O valor de char é %c",*p);
}