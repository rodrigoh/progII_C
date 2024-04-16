/*Crie um programa para ler a nota da prova de 15 alunos e 
armazene num vetor, calcule e imprima a média geral. Em 
seguida conte quantos alunos estão acima da média calculada.
*/
#include<stdio.h>

int main(){
  float notas[15];
  float soma = 0;
  for(int i=0; i<15; i++){
    printf("Digite a nota do aluno %d: ",i+1);
    scanf("%f",&notas[i]);
    soma+=notas[i];
  }
  float media = soma/15;
  int cont=0;
  for(int i=0; i<15; i++){
    if(notas[i]>media){
      cont++;
    }
  }
  printf("Estao acima da media %.2f, %d alunos\n",media,cont);
  return 0;
}