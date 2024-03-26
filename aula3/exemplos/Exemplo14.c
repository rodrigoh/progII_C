#include<stdio.h>

int main(){
  int numero;
  printf("Classificar um numero como negativou positivo ou zero");
  printf("\nDigite um numero: ");
  scanf("%d",&numero);
  if(numero==0)
    printf("O numero e zero\n");
  else if(numero > 0)
    printf("%d e positivo\n",numero);
  else
    printf("%d e negativo\n",numero);
  return 0;
}