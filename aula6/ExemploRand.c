#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  srand(time(NULL));
  //Chamando a função random que vai gerar um número entre 0 e 99
  int num = rand()%100;
  printf("%d\n",num);
  for(int i=0;i<20;i++){
    num = rand()%100;
    printf("%d ",num);
  }
  return 0;
}