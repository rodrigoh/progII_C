#include<stdio.h>

int main(){
  int j = 9;
  //Primeiro usa (mostra na tela) o valor e depois incrementa
  //printf("%d \n",j++);
  //Primeiro incrementa e depois usa o valor já atualizado
  printf("%d \n",++j);
  printf("%d \n",j);
  return 0;
}