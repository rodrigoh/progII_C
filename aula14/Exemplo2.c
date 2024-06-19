#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
typedef float nota;
int main(){
  nota n1;
  nota n2;
  nota media;

  printf("Digite a primeira nota: ");
  scanf("%f",&n1);

  printf("Digite a segunda nota: ");
  scanf("%f",&n2);

  media = (n1+n2)/2;
  printf("%.2f\n",media);
  return 0;

}