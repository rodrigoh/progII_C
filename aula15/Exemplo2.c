#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  int tInteiro = sizeof(int);
  int tChar = sizeof(char);
  int tFloat = sizeof(float);

  printf("\nUm número inteiro ocupa %d bytes",tInteiro);
  printf("\nUm número float ocupa %d bytes",tFloat);
  printf("\nUm caractere ocupa %d bytes",tChar);
  return 0;

}