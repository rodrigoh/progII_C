#include<stdio.h>
#include<windows.h>

void eNulo(int valor){
  if(valor==NULL)
    printf("O valor é nulo");
  else
    printf("O valor não é nulo");
}

int main(){
  SetConsoleOutputCP(65001);
  eNulo(5);
  return 0;
}