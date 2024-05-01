//Faça um programa que conte o número de 1’s que aparecem 
//em um string.
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char numBinario[9];
  printf("Digite um número binário, ex 0011001: ");
  scanf("%s",numBinario);
  int contBitL = 0;
  for(int i=0;numBinario[i]!='\0';i++){
    if(numBinario[i]=='1'){
      contBitL++;
      // contBitL = contBitL+1;
      // contBitL+=1;
    }
  }
  printf("O número binário tem %d bits 1\n",contBitL);
  return 0;
}