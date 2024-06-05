/*
Faça um programa em C que ache todos os números perfeitos até 1000. Número perfeito é aquele que é a soma de seus fatores. 
Por exemplo, 6 é divisível por 1, 2 e 3 ao passo que 6 = 1 + 2 + 3.
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//Retornar 1 para número perfeito e 0 para não
int ePerfeito(int n){
  int soma = 0;
  for(int i=1;i<n;i++){
    if(n%i==0){
      soma+=i;
    }
  }
  return soma==n?1:0;
  // if(soma==n)
  //   return 1;
  // else
  //   return 0;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  printf("São números perfeitos até 1000:\n");
  for(int i=1;i<1000;i++){
    if(ePerfeito(i))
      printf("%d ",i);
  }
  return 0;
}