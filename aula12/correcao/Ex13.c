/*
Faça um programa em C que acha todos os números primos até 1000. Número primo é aquele que é divisível somente por 1 e 
por ele mesmo.
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//Retornar 1 para número primo e 0 para não primo
int ePrimo(int num){
  int contDiv = 0;
  for(int i=1;i<=num;i++){
    if(num%i==0){
      contDiv++;
    }
  }
  //teste ? valor se verdadeiro : valor se falso
  return contDiv==2?1:0;

  // if(contDiv==2)
  //   return 1;
  // else
  //   return 0;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  printf("São primos entre 1 e 1000 os seguintes valores:\n");
  for(int i=1;i<1000;i++)
    if(ePrimo(i)==1)
      printf("%d ",i);
  return 0;
}