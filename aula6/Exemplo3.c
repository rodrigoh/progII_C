#include<stdio.h>

int main(){
  int lista[100];
  int cont=0;
  int num;
  //Lendo números até o usuário digitar 0
  do{
    printf("Digite um numero e 0 para encerrar: ");
    scanf("%d",&num);
    if(num!=0){
      lista[cont] = num;
      cont++;
    }
  }
  while(num!=0 && cont<100);
  printf("\nDados na lista\n");
  for(int i=0;i<cont;i++){
    printf("%d ",lista[i]);
  }
  return 0;

}