#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

struct aluno{
  char nome[50];
  int matricula;
  float notas[3];
  // float n1;
  // float n2;
  // float n3;
  int nFaltas;
  char status;
};

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  struct aluno alunoUm;
  printf("Qual o nome do aluno: ");
  scanf("%s",alunoUm.nome);
  printf("Qual a matrícula do %s:\n",alunoUm.nome);
  scanf("%d",&alunoUm.matricula);
  for(int i=0;i<3;i++){
    printf("Digite a %dº nota do aluno: ",i+1);
    scanf("%d",&alunoUm.notas[i]);
  }
  printf("Qual o número de faltas: ");
  scanf("%d",&alunoUm.nFaltas);
  
  
  
  return 0;
}