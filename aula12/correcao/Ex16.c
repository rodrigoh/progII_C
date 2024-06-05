/*
Elabore uma função que retorne como resultado o valor de uma potência de uma base  B qualquer  elevada a  um expoente  
E qualquer,  ou  seja, de  B E  (Sem utilizar funções especiais da biblioteca matemática do C).
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

float power(float base, float expoente){
  float pot = 1;
  for(int i=1;i<=expoente;i++){
    pot*=base;
  }

  return pot;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  float valor = power(5,2);
  printf("5²=%.2f\n",valor);
  return 0;
}