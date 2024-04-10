#include<stdio.h>
/*Escreva um programa para ler uma senha. Se o usuário não digitar a senha correta que é 12345, o 
programa deve ler novamente, até que seja a senha correta. O programa deve também contar quantas 
vezes o usuário tentou digitar a senha incorreta, ou seja, quantas tentativas de acerto aconteceram. 
Escrever essa informação na tela. */

int main(){
  int cont=0;
  int senha;
  do{
    printf("Digite sua senha: ");
    scanf("%d",&senha);
    if(senha!=12345){
      printf("\nSenha errada!\n");
      cont++;
    }
  }
  while(senha != 12345);

  printf("Bem vindo, voce errou a senha %d vezes\n",cont);
  return 0;
}