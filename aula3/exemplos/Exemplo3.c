#include<stdio.h>
#define PI 3.14159265359;

int main(){
  printf("Digite o valor do raio: ");
  float raio;
  scanf("%f",&raio);
  float area = raio*raio*PI;
  printf("A area do cirulo vale %.2f\n",area);
  return 0;
}