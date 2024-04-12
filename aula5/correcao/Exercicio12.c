#include<stdio.h>
#include<windows.h>
/*
Utilizando o comando switch case, implemente um programa em C que lê como entrada uma data no formato dd/mm/aaaa e que escreve a data no formato ?dd de nome-do-mês de aaaa?. Por exemplo, a data 19/03/2012 deve ser apresentada como ?19 de março de 2012?. Para fazer a leitura da data no formato dd/mm/aaaa, inclua no seu programa as seguintes linhas: printf("Digite uma data no formato dd/mm/aaaa: "); scanf("%i/%i/%i", &dia, &mes, &ano);
*/

int main(){
  int dia;
  int mes;
  int ano;
  SetConsoleOutputCP(65001);
  printf("Digite uma data no formato dd/mm/aaaa: ");
  scanf("%d/%d/%d",&dia, &mes, &ano);
  if(dia>=1 && dia<=31 && mes>=1 && mes<=12 && ano>=1000){
    switch (mes) {
    case 1:
      printf("%d de janeiro de %d\n",dia, ano);
      break;
    case 2:
      printf("%d de fevereiro de %d\n",dia, ano);
      break;
    case 3:
      printf("%d de março de %d\n",dia, ano);
      break;
    case 4:
      printf("%d de abril de %d\n",dia, ano);
      break;
    case 5:
      printf("%d de maio de %d\n",dia, ano);
      break;
    case 6:
      printf("%d de junho de %d\n",dia, ano);
      break;
    case 7:
      printf("%d de julho de %d\n",dia, ano);
      break;
    case 8:
      printf("%d de agosto de %d\n",dia, ano);
      break;
    case 9:
      printf("%d de setembro de %d\n",dia, ano);
      break;
    case 10:
      printf("%d de outubro de %d\n",dia, ano);
      break;
    case 11:
      printf("%d de novembro de %d\n",dia, ano);
      break;
    case 12:
      printf("%d de dezembro de %d\n",dia, ano);
      break;
    }
  }
  else{
    printf("A data não parece ser válida!");
  }
  return 0;
}