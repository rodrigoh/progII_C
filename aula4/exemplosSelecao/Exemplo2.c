#include<stdio.h>

int main(){
  printf("Escolha uma alternativa de a a d");
  char opc;
  scanf("%c",&opc);
  switch(opc){
    case 'a':
    case 'A':
      printf("Marcou a alternativa a");
      break;
    case 'b':
    case 'B':
      printf("Marcou a alternativa b");
      break;
    case 'c':
    case 'C':
      printf("Marcou a alternativa c");
      break;
    case 'd':
    case 'D':
      printf("Marcou a alternativa d");
      break;
    default:
      printf("Alernativa invalida");
  }
  return 0;
}