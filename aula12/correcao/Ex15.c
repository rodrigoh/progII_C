/*
Faça um programa para ler (no programa principal): nota da 1ª prova, nota da 2ª prova e número de faltas. A seguir deve 
criar dois módulos: 
a) Uma função cálculo da média: ((p1*4) + (p2*6))/10
b) Um módulo para o cálculo da situação do aluno que estará “Aprovado” se média >=6.0  e  número de faltas<=16, caso contrário
aluno “Reprovado”
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

float calculaMedia(float p1, float p2){
  return (p1*4+p2*6)/10;
}

void verificaStatus(float media, int nFaltas){
  if(media>=6 && nFaltas<=16){
    printf("aprovado\n");
  }
  else{
    printf("reprovado\n");
  }
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  float n1;
  float n2;
  int faltas;
  printf("Qual a nota da primeira avaliação: ");
  scanf("%f",&n1);
  printf("Qual a nota da segunda avaliação: ");
  scanf("%f",&n2);
  printf("Quantas faltas o aluno tem: ");
  scanf("%d",&faltas);
  float media = calculaMedia(n1,n2);
  printf("Com média %.2f o aluno está ",media);
  verificaStatus(media,faltas);
  return 0;
}
