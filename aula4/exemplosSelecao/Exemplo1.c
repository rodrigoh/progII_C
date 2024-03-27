#include<stdio.h>

int main(){
  printf("Digite um numero de 1 a 7: ");
  int dia;
  scanf("%d",&dia);

  switch(dia){
    case 1:
      printf("O dia e segunda feira");
      break;
    case 2:
      printf("O dia e terca feira");
      break;
    case 3:
      printf("O dia e quarta feira");
      break;
    case 4:
      printf("O dia e quinta feira");
      break;
    case 5:
      printf("O dia e sexta feira");
      break;
    case 6:
      printf("O dia e sabado");
      printf("\ne fim de semana");
      break;
    case 7:
      printf("O dia e domingo");
      break;
    default:
      printf("Numero invalido");
  }
  return 0;
}