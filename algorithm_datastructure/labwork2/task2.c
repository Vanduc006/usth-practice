#include <stdio.h>

typedef struct _Node { // represent car, like column
    int data[5];
    char id;
    struct _Node *pNext;
} Node;

typedef struct _List { // represent train, like table
    int size;
    Node *pHead;
} List;

int main() {
    
}