#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  printf("Dados na matriz\n");
  for(int l=0;l<3;l++){
    for(int c=0;c<3;c++){
      printf("%d ",matriz[l][c]);
    }
    printf("\n");
  }

  printf("Dados na diagonal da matriz:\n");
  // for(int l=0;l<3;l++){
  //   for(int c=0;c<3;c++){
  //     if(l==c){
  //       printf("%d ",matriz[l][c]);
  //     }
  //   }
  // }
  for(int i=0;i<3;i++){
    printf("%d ",matriz[i][i]);
  }

  printf("\nDados na diagonal secundária:\n");
  for(int l=0;l<3;l++){
     for(int c=0;c<3;c++){
      if(l+c==2){
        printf("%d ",matriz[l][c]);
      }
     }
  }
  return 0;
}