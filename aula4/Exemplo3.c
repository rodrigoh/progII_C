#include<stdio.h>

int main(){
  int n;
  printf("Digite um numero: ");
  scanf("%d",&n);

  if(n>=0 && n<10){
    printf("n esta entre 0 e 10");
  }