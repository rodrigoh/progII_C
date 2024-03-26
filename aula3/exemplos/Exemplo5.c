#include<stdio.h>

int main(){
  int a = 5;
  int b = 10;
  
  //a = a + b;
  a += b;

  printf("A soma de a e b vale %d\n",a);
  
  //a = a - b;
  a -= b;
  printf("A subtracao de a por b vale %d\n",a);
  
  //a = a / b;
  a /= b;
  printf("a / b = %d\n",a);

  int j = 4;
  int t = 2;
  j = j % t;
  j %= t;
  printf("O resto da divisao de j por t vale %d\n",j);

  j+=2; // j = j + 2
  return 0;

}