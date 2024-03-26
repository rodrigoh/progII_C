#include<stdio.h>

const float PI = 3.14159265359; 

const int SALA = 203;

int main(){
  printf("Digite o valor do raio: ");
  float raio;
  scanf("%f",&raio);
  float area = raio*raio*PI;
  printf("A area do cirulo vale %.2f\n",area);
  printf("A sala e %d\n",SALA);
  return 0;
}