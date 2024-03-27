#include<stdio.h>

int x = 10;

int soma(int n1, int n2){
  int soma = n1+n2;
  return soma;
}
int main(){

  int t = 5;
  int resp = soma(x,t);
  return 0;
}