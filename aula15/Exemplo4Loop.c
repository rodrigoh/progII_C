#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  int *p;

  p = (int*) malloc(4*sizeof(int));
  for(int i=0;i<4;i++){
    printf("Digite um valor para n%d: ",i+1);
    scanf("%d",p+i);
  }
  for(int i=0;i<4;i++){
    printf("Valor de n%d é %d\n",i+1,*(p+i));
  }
  return 0;
}  