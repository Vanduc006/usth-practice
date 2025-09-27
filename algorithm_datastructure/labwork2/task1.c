#include <stdio.h>
// static const int = 1000000;

struct _List {
    int size;
    int data[1000000];
};
typedef struct _List List;

void initList(List *I) {
    I -> size = 0;
}

int isEmpty(List *I) {
    return (I -> size == 0);
}

int getLength(List *I) {
    return (I -> size);
}

int showList(List *I) {
    for(int i=0; i < getLength(I); i++) {
        printf("%d",I -> data[i]);
    }
    printf("\n");
}

void insertItem(List *I, int index, int value) {
    if (getLength(I) == 1000000) {
        return;
    }
    if (index < 0 || index > getLength(I)) {
        return;
    }
    else {
        for(int i = getLength(I); i > index;i--) { //start from 7 
            I -> data[i] = I -> data[i-1]; // shift to make empty value at index
        }
        I -> data[index] = value; //insert value, shift to right
        I -> size++;
    }
}

void removeItem(List *I, int index) {
    if (isEmpty(I) == 1) {
        return;
    }
    if (index < 0 || index > getLength(I)) {
        return;
    }
    else {
        for(int i=index -1; i < getLength(I)-1; i++) {
            I -> data[i] = I -> data[i+1];
        }
        I -> size--;
    }
}

int addValue(List *I, int value) {
    if (getLength(I) == 1000000) return -1;
    I->data[I->size] = value;
    I->size++;
    return 0;
}

int main() {
    List I;
    initList(&I);
    
    addValue(&I, -1);  // sign = positive
    int digits[7] = {1,2,3,4,5,6,7};

    for (int i=0; i<7; i++) addValue(&I, digits[i]);

    printf("Init list: ");
    showList(&I);  

    insertItem(&I, 3, 9);
    printf("After insert: ");
    showList(&I);

    removeItem(&I, 2); 
    printf("After remove: ");
    showList(&I);

    int sum = 0;
    for (int i = 1; i < I.size; i++) {
        sum += I.data[i];
    }
    printf("Sum of digits: %d\n", sum);

    return 0;
}
