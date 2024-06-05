#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//variáveis globais
int n1, n2, n3, resp;

//Função acessando variáveis globais
void soma(){
  resp = n1+n2+n3;
}

//tipo de retorno (void se não houver) nome da função (parâmetros)
int somaNumero(int n1, int n2, int n3){
  return n1+n2+n3;
}


int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int v1, v2, v3;
  printf("Digite um valor para v1: ");
  scanf("%d",&v1);
  printf("Digite um valor para v2: ");
  scanf("%d",&v2);
  printf("Digite um valor para v3: ");
  scanf("%d",&v3);
  int resposta = somaNumero(v1,v2,v3);
  printf("A soma dos três números vale %d\n",resposta);
  //Atribuindo valores para as variáveis globais n1, n2 e n3
  n1 = v1;
  n2 = v2;
  n3 = v3;
  soma();
  printf("A soma dos três números vale %d\n",resp);
  return 0;
}