#include<stdio.h>
/*Escreva um programa para pedir que o usuário digite números positivos, ou seja, ele pode digitar quantos 
números positivos ele quiser. Para parar de digitar números, ele deve digitar -1. Após o usuário digitar -1, 
o programa deve escrever na tela quantos números o usuário digitou (a quantidade de números lidos) e a soma 
total dos números que ele digitou. */
int main(){
  int cont=0;
  int soma=0;
  int num;
  do{
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num>0){
      soma+=num;
      cont++;
    }
  }
  while(num>0);
  printf("Foram digitados %d numeros que somados valem %d\n",cont,soma);
  return 0;
}