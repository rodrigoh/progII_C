#include<stdio.h>
#include<windows.h>
/*
Um banco concede empr�stimo a seus clientes no valor de 30% do valor do seu sal�rio l�quido. Receba o valor do sal�rio bruto, o percentual dos descontos e o valor que o cliente solicitou de empr�stimo, em seguida informe se ele poder� ou n�o ter o empr�stimo.
*/
int main(){
  float salario;
  float pDesconto;
  float sLiquido;
  float valorEmprestimo;
  float empMaximo;
  SetConsoleOutputCP(65001);
  printf("Qual o sal�rio bruto: ");
  scanf("%f",&salario);
  printf("Qual o percentual de desconto: ");
  scanf("%f",&pDesconto);
  printf("Qual o valor deseja emprestado: ");
  scanf("%f",&valorEmprestimo);
  sLiquido = salario-salario*(pDesconto/100);
  empMaximo = sLiquido*0.3;
  if(valorEmprestimo<=empMaximo){
    printf("� poss�vel realizar o empr�stimo\n");
  }
  else{
    printf("Na� � poss�vel realizar o empr�stimo ");
    printf("O valor m�ximo autorizado � R$%.2f\n",empMaximo);
  }
  return 0;
}