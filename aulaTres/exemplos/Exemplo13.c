#include<stdio.h>

int main(){
  int nota;
  printf("digite uma nota entra 0 e 10: ");
  scanf("%d",&nota);
  if(nota >=0 && nota<=10){
    printf("Nota valida");
  }
  else{
    printf("Nota digitada nao e valida");
  }
  return 0;
}