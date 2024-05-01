//Faça um programa que leia uma palavra e a imprima ao contrário
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char palavra[20];
  printf("Digite uma palavra: ");
  scanf("%s",palavra);
  //Descrobrir o tamanho da String
  int tam=0;
  for(;palavra[tam]!='\0';tam++);
  //
  printf("A String inversa fica:\n");
  for(int i=tam;i>=0;i--){
    printf("%c",palavra[i]);
  }
  return 0;
}