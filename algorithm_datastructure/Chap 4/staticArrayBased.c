#include <stdio.h>
#include <stdlib.h>

struct _Stack{
    int data[100];
    int top;
};
typedef struct _Stack Stack;


Stack* init2() {
    Stack* st = (Stack*)malloc(sizeof(Stack));
    return st;
}

int isEmpty(Stack st) {
	return (st.top < 0);
}

void initStack(Stack *st) {
    st -> top=1;
}

int main() {
    Stack *st;
    st = (Stack*)malloc(sizeof(Stack));
    initStack(st);
}
