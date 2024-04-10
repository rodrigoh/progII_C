#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int vetor[50];
  srand(time(NULL));
  for(int i=0;i<50;i++){
    vetor[i] = rand()%100;
    printf("%d ",vetor[i]);
  }
  return 0;
}