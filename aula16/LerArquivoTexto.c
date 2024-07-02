#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  FILE *arquivo;
  //r abre o arquivo para leitura
  arquivo = fopen("texto.txt","r");
  if(arquivo!=NULL){
    printf("Arquivo criado...");
    char letra;
    do{
      letra = getc(arquivo);
      if(letra!=EOF)
        printf("%c",letra);
    }
    while(letra!=EOF);
    fclose(arquivo);
  }
  else{
    printf("Erro ao criar o arquivo!");
  }
  return 0;
}