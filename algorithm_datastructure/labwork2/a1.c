#include <stdio.h>
#define CAPACITY 100


typedef struct _Item Item;

struct _List {
    int arr[CAPACITY];
    int size;
    // ktra rong -> size < 0
    // ktra full -> size >= CAPACITY
};
typedef struct _List List;

// function la int -> return int
// void -> ko 

void initList(List *I) {
    I -> size = 0;
}


int isEmpty(List *I) {
    return I -> size == 0; 
    // 1 true
    // 0 false
}

int isFull(List *I) {
    return I -> size >= CAPACITY;
}

void addValue(List *I, int value) {
    Item -> value = value;
    I -> size++;
    I -> arr[I->size] = Item;

}


int main() {
    // int i = 0;
    List list;
    

    // index 1,2,3,4...
    initList(&list);
    // list.size = 0;
    // printf("%d",list.arr[1]);
}

