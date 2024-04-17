#include<stdio.h>
#include<windows.h>

/*
Para se saber o dia da semana (de segunda-feira a domingo) em que uma determinada data cai, pode-se fazer uso do seguinte algoritmo:  Deve-se ler como entrada o dia, mês e ano da data em questão.  A partir destes três valores, efetuar o seguinte cálculo: 
dtJuliana = (1461*(ano + 4800 +(mes - 14)/12))/4+ (367 * (mes-2-12*((mes - 14)/12)))/12 - (3*((ano+4900+(mes - 14)/12)/100))/4 + dia - 32075; 
obtendo o valor da chamada data juliana correspondente.  
Obter o resto da divisão da data juliana por 7. Este valor deve ser interpretado da seguinte forma: 
0 ? Segunda-feira. 
1 ? Terça-feira. 
2 ? Quarta-feira. 
3 ? Quinta-feira. 
4 ? Sexta-feira. 
5 ? Sábado. 
6 ? Domingo. 
Escreva um programa em C que implementa este algoritmo e que faz uso do comando switch-case para determinar o dia da semana ao qual corresponde a data entrada.

*/
int main(){
  int dia;
  int mes;
  int ano;
  SetConsoleOutputCP(65001);
  printf("Digite uma data no formato dd/mm/aaaa: ");
  scanf("%d/%d/%d",&dia, &mes, &ano);
  if(dia>=1 && dia<=31 && mes>=1 && mes<=12 && ano>=1000){
    int dtJuliana = (1461*(ano + 4800 +(mes - 14)/12))/4+ (367 * (mes-2-12*((mes - 14)/12)))/12 - (3*((ano+4900+(mes - 14)/12)/100))/4 + dia - 32075;
    int diaSemana = dtJuliana%7;
    switch(diaSemana){
      case 0:
        printf("A data %d/%d/%d, caiu em uma segunda-feira\n",dia,mes,ano);
        break;
      case 1:
        printf("A data %d/%d/%d, caiu em uma terça-feira\n",dia,mes,ano);
        break;
      case 2:
        printf("A data %d/%d/%d, caiu em uma quarta-feira\n",dia,mes,ano);
        break;
      case 3:
        printf("A data %d/%d/%d, caiu em uma quinta-feira\n",dia,mes,ano);
        break;
      case 4:
        printf("A data %d/%d/%d, caiu em uma sexta-feira\n",dia,mes,ano);
        break;
      case 5:
        printf("A data %d/%d/%d, caiu em uma sábado\n",dia,mes,ano);
        break;
      case 6:
        printf("A data %d/%d/%d, caiu em uma domingo\n",dia,mes,ano);
        break;

    }

  }
  else{
    printf("A data parece ser inválida!");
  }
  return 0;
}