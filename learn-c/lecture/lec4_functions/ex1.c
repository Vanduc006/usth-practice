#include <stdio.h>
// float, int, char
void test(float a,float b,float c) {
    float sum = a + b + c;
    printf("%f",sum);
}

int main() {
    test(1,2,3);
    return 0;

}
// float can be declared function, int, char not only void()