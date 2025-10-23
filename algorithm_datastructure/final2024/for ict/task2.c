#include <stdio.h>
#define MAX 100

struct _Stack {
    int data[MAX];
    int size;
};
typedef struct _Stack Stack;

void add(Stack *st,int value) {
    st -> data[st -> size] = value;
    st -> size++;
}

int getNum(Stack *st) {
    int num = 0;
    for (int i=0; i < st->size; i++) {
        num = num * 10;
        num += st->data[i];
    }
    return num;
}

int main() {
    int num = 56;
    Stack input;
    Stack output;

    input.size = 0;
    output.size = 0;

    int k = num;
    while (k > 0) {
        // input.data[input.size] = num % 10;
        add(&input, k % 10);
        // printf("%d", num % 10);
        k /= 10;
    }
    // printf()

    // printf("%d", getNum(&input));
    int sum = num + getNum(&input);
    printf("%d is \n", num);
    
    k = sum;
    while ( k > 0) {
        add(&output, k % 10);
        k /= 10;
    }

    if (output.data[0] == output.data[output.size -1]) {
         printf("palindromic");
    }
    else {
        printf("not palindromic");   
    }


}