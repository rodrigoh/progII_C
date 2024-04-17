#include<stdio.h>

int main(){
  int lista[100];
  int cont=0;
  int num;
  char resp;
  //Lendo números até o usuário digitar 0
  do{
    printf("Digite um numero e 0 para encerrar: ");
    scanf("%d",&num);
    if(num!=0){
      lista[cont] = num;
      cont++;
    }
    printf("Tem mais numeros s - sim, n - nao: ");
    setbuf(stdin,NULL);
    scanf("%c",&resp);
  }
  while(resp=='s' && cont<100);
  printf("\nDados na lista\n");
  for(int i=0;i<cont;i++){
    printf("%d ",lista[i]);
  }
  return 0;

}