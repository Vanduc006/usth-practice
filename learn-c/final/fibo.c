#include <stdio.h>
int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}
int main() {
    int n = 10;
    printf("%d",fibbonacci(n));
}