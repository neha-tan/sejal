#include <stdio.h>
void tabel() {
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
    printf(" %d * %d = %d \n", n, i, n * i);
  }
}  
int main(){
 tabel();
}

