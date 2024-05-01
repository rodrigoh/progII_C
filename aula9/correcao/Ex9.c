//Faça um programa que leia uma string de até 50 caracteres e a exiba sem as vogais
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char string[50];
  printf("Digite uma string: ");
  gets(string);
  for(int i=0;string[i]!='\0';i++){
    if(string[i]!='a' && string[i]!='e' && string[i]!='i' && string[i]!='o' && string[i]!='u'){
      printf("%c",string[i]);
    }
  }
  return 0;
}