/*
Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  //Windows
  system("cls");
  //Linux
  //system("clear");
  char palavra[50];
  printf("Digite uma palavra: ");
  gets(palavra);
  for(int i=0;palavra[i]!='\0';i++){
    if(palavra[i]>=65 && palavra[i]<=90){
      //palavra[i] = palavra[i]-32;
      palavra[i]+=32;
    }
  }
  printf("A string em letras minúsculas é %s\n",palavra);
  return 0;
}