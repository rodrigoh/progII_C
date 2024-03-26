#include<stdio.h>

int main(){
  int idade;
  printf("Classificacao de idades");
  printf("\nDigite uma idade: ");
  scanf("%d",&idade);
  if(idade <= 0)
    printf("Idade invalida\n");
  else if(idade < 10)
    printf("Categoria infantil\n");
  else if(idade < 23)
    printf("categoria juvenil\n");
  else if(idade < 65)
    printf("Categoria adulto\n");
  else
    printf("Categoria terceira idade\n");
  return 0;
}