/*
Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, 
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. 
Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, 
o salário fixo e o valor que ele recebe por carro vendido. 
Calcule e escreva o salário final do vendedor
*/
#include<stdio.h>

int main(){
  float salarioFixo;
  float comissaoCarro;
  float totalVendas;
  int numeroCarros;

  printf("Sobre suas vendas informe:\n");
  printf("Salario fixo R$");
  scanf("%f",&salarioFixo);
  printf("Quantidade de carros vendidos: ");
  scanf("%d",&numeroCarros);
  printf("Qual o valor total das vendasR$");
  scanf("%f",&totalVendas);
  printf("Qual a comissao por carro R$");
  scanf("%f",&comissaoCarro);
  float salarioTotal = salarioFixo+comissaoCarro*numeroCarros+totalVendas*0.05;
  printf("Seu salario total sera de R$%.2f\n",salarioTotal);
  return 0;
}