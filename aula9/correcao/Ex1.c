//Faça um programa que então leia uma string e a imprima.

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  char palavra[50];
  system("cls");
  SetConsoleOutputCP(65001);
  printf("Digite uma frase: ");
  //scanf("%s",palavra);
  gets(palavra);
  printf("A frase digitada foi %s\n",palavra);
  //Ex 2 descrobrindo o comprimento da String
  int tamanho;
  for(tamanho=0;palavra[tamanho]!='\0';tamanho++);
  printf("O tamanho da String é %d\n",tamanho);
  return 0;
}