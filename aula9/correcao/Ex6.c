/*
Crie um programa que compara duas strings
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char palavraUm[20];
  char palavraDois[20];

  printf("Digite a primeira palavra: ");
  gets(palavraUm);
  printf("Digite a segunda palavra: ");
  gets(palavraDois);
  int tp1 = 0;
  int tp2 = 0;
  for(tp1=0;palavraUm[tp1]!='\0';tp1++);
  for(tp2=0;palavraDois[tp2]!='\0';tp2++);
  //se forem iguais a variável vale 1
  //se forem diferentes a variável vale 2
  int iguais = 1;
  if(tp1==tp2){
    for(int i=0;palavraUm[i]!='\0';i++){
      if(palavraUm[i]!=palavraDois[i]){
        iguais = 0;
      }
    }
  }
  else{
    iguais = 0;
  }
  if(iguais==1){
    printf("As duas palavras são iguais");
  }
  else{
    printf("As duas palavras são diferentes");
  }
  return 0;
}