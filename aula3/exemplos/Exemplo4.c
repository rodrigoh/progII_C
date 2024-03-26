#include<stdio.h>

int main(){
  int x = 10;
  int y = 5;

  printf("y > x => %d\n",y>x);
  printf("x == 10 => %d\n",x==10);
  printf("y != x => %d\n",y!=x);

  printf("x > 5 && y == 5 => %d\n",(x > 5) && (y == 5));
  printf("x > 5 || y < 10 =>  %d\n",(x > 5) || (y < 10));
  return 0;
}