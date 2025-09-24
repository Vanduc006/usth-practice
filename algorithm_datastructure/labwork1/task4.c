// Write a pseudo-code by commenting in the file then implement a program in to
// enter a natural number n and verify whether n is sphenic. Calculate the complexity
// of your program.
// Note: A sphenic number is a product of p*q*r where p, q, and r are three distinct
// prime numbers. Example: 30 = 2 * 3* 5; 42 = 2*3*7; 66 = 2*3*11

// --> the idea
// First we need array of prime number < number input ?


int main() {
    int number;
    scanf("%d",&number);
    int size = number;
    int arr[size];
    int n = 0;
    for (int i=0; i <= size-1; i++) {
        if ( i !=0 || i != 1) {
            int isPrime = 1; // initail i as prime
            for (int j=2; j*j <= i; j++) {
                if (i % j != 0 ) { // found gcd 
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime == 1) {
                a[n] = i;
                n = n + 1;
            }

        }
    }
}

// Then loop array 