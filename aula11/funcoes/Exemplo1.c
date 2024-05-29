#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//tipo_retorno nome(paramatros - opcionais)
int soma(int n1, int n2){
  int resp = n1+n2;
  return resp;
}

void somaDois(int n1, int n2){
  int resp = n1+n2;
  printf("%d",resp);
}

void limpaTela(){
  system("cls");
}

int main(){
  limpaTela();
  int v1, v2;
  SetConsoleOutputCP(65001);
  printf("Digite um número: ");
  scanf("%d",&v1);
  printf("Digite outro número: ");
  scanf("%d",&v2);

  int resposta = soma(v1,v2);
  printf("A soma dos valores %d e %d vale %d\n",v1,v2,resposta);

  printf("A soma dos valores %d e %d vale ",v1,v2);
  somaDois(v1,v2);

  return 0;
}



