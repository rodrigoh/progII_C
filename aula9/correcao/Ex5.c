/*
Faça um programa que leia um nome completo de até 50 
caracteres e conte quantas letras ele tem, não conte os 
espaços entre os nomes
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char nome[50];
  printf("Digite seu nome completo: ");
  gets(nome);
  int tamanho=0;
  for(int i=0;nome[i]!='\0';i++){
    if(nome[i]!=' '){
      tamanho++;
    }
  }
  printf("O nome possui %d letras\n",tamanho);
  return 0;
}