#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  int *p;

  p = (int*) calloc(3,sizeof(int));
  printf("Digite o valor para n1: ");
  scanf("%d",p);
  printf("Digite o valor para n2: ");
  //Acessando a segunda 'parcela' do ponteiro
  scanf("%d",p+1);
  printf("Digite o valor para n3: ");
  scanf("%d",p+2);

  //Aumentar a capacidade alocada
  p = realloc(p,6*sizeof(int));
  printf("Digite um valor para n4: ");
  scanf("%d",p+3);
  printf("Digite um valor para n5: ");
  scanf("%d",p+4);
  printf("Digite um valor para n6: ");
  scanf("%d",p+5);


  printf("O valor de n1 %d\n",*p);
  printf("O valor de n2 %d\n",*(p+1));
  printf("O valor de n3 %d\n",*(p+2));
  printf("O valor de n4 %d\n",*(p+3));
  printf("O valor de n5 %d\n",*(p+4));
  printf("O valor de n6 %d\n",*(p+5));
  //Liberando o ponteiro...
  free(p);
  return 0;
}  