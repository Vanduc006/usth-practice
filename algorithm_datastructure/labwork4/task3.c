#include <stdio.h>
#define MAX 1000

int isPrime(int n, int i) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }

    if (n % i == 0) {
        return 0;
    }

    if (i*i > n) {
        return 1;
    }
    return isPrime(n, i+1);
}


int main() {
    int num = 30;
    int start=2;

    int countProduct = 0;
    int product = 1;
    int temp = num;

    for (int i=0; i < num; i++) {
        if (isPrime(i,start) == 1 && temp % i == 0) {
            countProduct++;
            product *= i;
            while (temp % i == 0) {
                temp = temp / i;
            } 
        }
    }

    if (temp > 1) {
        countProduct++;
        product *= temp;
    }

    if (countProduct == 3 && product == num) {
        printf("%d is sphenic",num);
    }
    else {
        printf("%d is not sphenic",num);
    }
    // isSphenic(arr);
    

    
    // while (num > 0) {
    //     if (isPrime(num,i) == 1) {
    //         printf("number %d is prime \n",num);
    //     } else {
    //         printf("number %d is not prime \n",num);
    //     }
    //     num--;
    // }

}

// get list prime < 29;
// store in array 

