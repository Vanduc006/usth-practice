#include <stdio.h>
// #define CAPACITY
int Harshad(int num) {
    if ( num == 0) {
        return num;
    }
    return num + Harshad(num / 10);
}
// Each time call n divide by 10
// So it take OLog(n) 


int iteration(int num) {
    int k = num;
    int n = 0;
    while (k > 0) {
        n = n + k;
        k =  k / 10;  
    }
    // Log(On)


}

int main() {
    int n = 10;
    while (n > 0 ) {
        iteration(n);
        n--;
    }

    printf("\n");
    printf("Implement with recursive \n");
    int num = 18;
    if (num % Harshad(num) != 0) {
        printf("Harshad number \n");
    }
    else {
        printf("Not harshad number \n");
    }
}