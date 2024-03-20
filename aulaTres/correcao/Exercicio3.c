/*
Escreva um programa para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o 
percentual que cada um representa em relação ao total de eleitores.
*/
#include<stdio.h>
//140 eleitores
//100 validos
//15 brancos
//25 nulos
int main(){
  int totalEleitores;
  int votosBrancos;
  int votosNulos;
  int votosValidos;
  float pVotosValidos;
  float pVotosNulos;
  float pVotosBrancos;
  printf("Quantos eleitores tem o municipio: ");
  scanf("%d",&totalEleitores);
  printf("Qual o numero de votos validos: ");
  scanf("%d",&votosValidos);
  printf("Qual o total de votos nulos: ");
  scanf("%d",&votosNulos);
  printf("Qual o total de votos brancos: ");
  scanf("%d",&votosBrancos);
  pVotosValidos = votosValidos/(float)totalEleitores*100;
  pVotosNulos = votosNulos/(float)totalEleitores*100;
  pVotosBrancos = votosBrancos/(float)totalEleitores*100;
  printf("Do total de votos sao validos %.3f%c\n",pVotosValidos,37);
  printf("Do total de votos sao brancos %.3f%%\n",pVotosBrancos);
  printf("Do totol de votos sao nulos %.3f%%\n",pVotosNulos);
  return 0;
}