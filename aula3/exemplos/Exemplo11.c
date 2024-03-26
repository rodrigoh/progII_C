#include<stdio.h>

int main(){
  /*Será necessário o cast de tipo caso a divisão seja de duas variáveis do tipo inteiro, já que neste cado o resultado
  também será um inteiro. 
  */
  int a = 5;
  int b = 2;
  float c = a / b;
  printf("%.2f\n",c);

  // float a = 5;
  // float b = 2;
  // float c = a / b;
  // printf("%.2f\n",c);
  return 0;
}