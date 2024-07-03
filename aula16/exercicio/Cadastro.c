#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;


typedef struct{
  char nome[50];
  char matricula[10];
  float notas[3];
  float media;
  Data nascimento;
} Aluno;

Data leData(){
  Data d1;
  printf("Digite uma data no formato dd/mm/aaaa: ");
  setbuf(stdin,NULL);
  scanf("%d/%d/%d",&d1.dia,&d1.mes,&d1.ano);
  return d1;
}

Aluno leAluno(){
  Aluno a1;
  printf("Qual o nome do aluno: ");
  setbuf(stdin,NULL);
  gets(a1.nome);
  printf("Qual a matricula do %s: ",a1.nome);
  setbuf(stdin,NULL);
  gets(a1.matricula);
  a1.nascimento = leData();
  printf("Do aluno %s informe\n",a1.nome);
  float soma = 0;
  setbuf(stdin,NULL);
  for(int i=0;i<3;i++){
    printf("%d° nota: ",i+1);
    scanf("%f",&a1.notas[i]);
    soma+=a1.notas[i];
  }
  a1.media = soma/3;
  return a1;
}

void mostraAluno(Aluno a1){
  printf("Nome: %s\n",a1.nome);
  printf("Matrícula: %s\n",a1.matricula);
  printf("Data de nascimento: %d/%d/%d\n",a1.nascimento.dia,a1.nascimento.mes,a1.nascimento.ano);
  for(int i=0;i<3;i++){
    printf("N%d = %.2f\n",i+1,a1.notas[i]);
  }
  printf("A média do aluno é %.2f\n",a1.media);
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  FILE *arquivo;
  char opc;
  do{
    printf("Selecione uma opção:\n");
    printf("c - cadastrar um novo aluno\n");
    printf("l - listar os alunos\n");
    printf("s - sair: ");
    setbuf(stdin,NULL);
    scanf("%c",&opc);
    if(opc=='c'){
      Aluno a = leAluno();
      arquivo = fopen("alunos.db","a");
      if(arquivo!=NULL){
        fwrite(&a,sizeof(Aluno),1,arquivo);
        printf("Aluno %s gravado com sucesso!",a.nome);
        fclose(arquivo);
      }
      else{
        printf("Não foi possível gravar o registro!");
      }
    }
    else if(opc=='l'){
      Aluno a;
      arquivo = fopen("alunos.db","r");
      if(arquivo!=NULL){
        while(!feof(arquivo)){
          fread(&a,sizeof(Aluno),1,arquivo);
          if(!feof(arquivo)){
            mostraAluno(a);
          }
        }
      }
    }
  }
  while(opc!='s');
  return 0;
}