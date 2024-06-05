/*
Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou Farenheit, depois a conversão escolhida é 
realizada através de um comando SWITCH.
Se C é a temperatura em Célsius e F em farenheit, as fórmulas de conversão são:C= 5.(F-32)/9 F= (9.C/5) + 32
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


float converteTemp(float tempOrigem, char unidadeDest){
  float tempDest;
  if(unidadeDest=='c'){
    tempDest = 5*(tempOrigem-32)/9;
  }
  else{
    tempDest = (9*tempOrigem/5) + 32;
  }
  return tempDest;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int opc;
  printf("Selecione 1 para converter de graus celsius para graus farenheit e 2 para realizar a operação inversa: ");
  scanf("%d",&opc);
  float tempC;
  float tempF;
  switch(opc){
    case 1:
      printf("Informe uma temperatura em °C: ");
      scanf("%f",&tempC);
      tempF = converteTemp(tempC,'f');
      printf("%.2f°C equivalem a %.2f ° F\n",tempC,tempF);
    break;
    case 2:
      printf("Informe uma temperatura em °F: ");
      scanf("%f",&tempF);
      tempC = converteTemp(tempF,'c');
      printf("%.2f°F equivalem a %.2f ° C\n",tempF,tempC);
    break;
    default:
      printf("Opção inválida!");
  }
  return 0;
}