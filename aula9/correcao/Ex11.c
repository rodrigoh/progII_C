/*
Leia uma frase e conte os caracteres e os espaços que a 
frase contém, mostre as informações separadamente
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char frase[50];
  int contLetra = 0;
  int contEspaco = 0;
  printf("Digite uma frase: ");
  gets(frase);
  for(;frase[contLetra]!='\0';contLetra++){
    if(frase[contLetra]==' '){
      contEspaco++;
    }
  }
  printf("Dados da String\n");
  printf("Tamanho total %d\n",contLetra);
  printf("Quantidade de espaços: %d\n",contEspaco);
  printf("Letras sem espaços: %d\n",contLetra-contEspaco);
  return 0;
}