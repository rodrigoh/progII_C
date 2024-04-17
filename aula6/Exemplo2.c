#include<stdio.h>

int main(){
  char letras[15];
  int i=0;
  while(i<15){
    printf("Digite uma letra para vetor[%d]: ",i);
    setbuf(stdin,NULL);
    scanf("%c",&letras[i++]);
  }

  i=0;
  do{
    printf("%c",letras[i]);
    i++;
  }
  while(i<15);
  return 0;
}