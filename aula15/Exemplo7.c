#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  FILE *arquivo;

  arquivo = fopen("texto.txt","a");
  printf("Arquivo criado...");
  fclose(arquivo);
  return 0;
}