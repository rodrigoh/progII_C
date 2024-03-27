#include<stdio.h>

int main(){
  int n;
  printf("Digite um numero: ");
  scanf("%d",&n);

  if(n>0){
    printf("%d e positivo",n);
    printf("outro print...");
  }
  else
    printf("%d e negativo",n);

  return 0;
}