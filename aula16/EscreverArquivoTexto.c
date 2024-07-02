#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  FILE *arquivo;
  //a abre o arquivo para adicionar mais conteúdo
  arquivo = fopen("texto.txt","a");
  if(arquivo!=NULL){
    printf("Arquivo criado...");
    for(int i=0;i<10;i++){
      fprintf(arquivo,"Linha %d do arquivo\n",i+1);
    }
    fclose(arquivo);
  }
  else{
    printf("Erro ao criar o arquivo!");
  }
  return 0;
}