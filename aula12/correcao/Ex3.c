/*
Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e retorne o 
valor do delta, que é dado por 'b² - 4ac'
Usando as 3 funções acima, crie um aplicativo que calcula as raízes de uma equação do 2o grau: ax² + bx + c=0
Para ela existir, o coeficiente 'a' deve ser diferente de zero.
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

float calculaD(float a, float b, float c){
  return b*b-4*a*c;
}

float calculaX(float a, float b, float d, char opc){
  float x;
  if(opc=='+')
    x = (-b+sqrt(d))/(2*a);
  else
    x = (-b-sqrt(d))/(2*a);
  return x;
}

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  printf("Data a equação ax²+bx+c, informe os valores de\n");
  float a,b,c;
  printf("a: ");
  scanf("%f",&a);
  printf("b: ");
  scanf("%f",&b);
  printf("c: ");
  scanf("%f",&c);

  float d = calculaD(a,b,c);
  if(d>=0){
    float x1 = calculaX(a,b,d,'+');
    float x2 = calculaX(a,b,d,'-');
    printf("As raízes da equação são x':%.3f e x\":%.3f\n",x1,x2);
  }
  else{
    printf("A equação não possui raízes no conjunto dos reis");
  }
  return 0;
}