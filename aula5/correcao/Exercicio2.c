#include<stdio.h>
#include<windows.h>
/*
Um banco concede empréstimo a seus clientes no valor de 30% do valor do seu salário líquido. Receba o valor do salário bruto, o percentual dos descontos e o valor que o cliente solicitou de empréstimo, em seguida informe se ele poderá ou não ter o empréstimo.
*/
int main(){
  float salario;
  float pDesconto;
  float sLiquido;
  float valorEmprestimo;
  float empMaximo;
  SetConsoleOutputCP(65001);
  printf("Qual o salário bruto: ");
  scanf("%f",&salario);
  printf("Qual o percentual de desconto: ");
  scanf("%f",&pDesconto);
  printf("Qual o valor deseja emprestado: ");
  scanf("%f",&valorEmprestimo);
  sLiquido = salario-salario*(pDesconto/100);
  empMaximo = sLiquido*0.3;
  if(valorEmprestimo<=empMaximo){
    printf("É possível realizar o empréstimo\n");
  }
  else{
    printf("Naõ é possível realizar o empréstimo ");
    printf("O valor máximo autorizado é R$%.2f\n",empMaximo);
  }
  return 0;
}