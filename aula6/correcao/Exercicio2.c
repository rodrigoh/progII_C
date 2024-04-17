#include<stdio.h>
/*Escreva um programa que leia 10 valores e conte quantos deles estão 
no intervalo entre 10 e 20. Depois escreva essa informação*/
int main(){
  int cont = 0;
  int num;
  for(int i=0;i<10;i++){
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num>10 && num<20)
      cont++; 
  }
  printf("Dos numeros digitos estao entre 10 e 20 %d\n",cont);
  return 0;
}