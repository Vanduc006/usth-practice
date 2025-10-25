#include <stdio.h>
#define NUM 7
typedef struct {
    int value;
    int frequency;
} Element;

typedef struct {
    int size;
    Element data[100];
} List;

void initList(List *list) {
    list -> size = 0;
}

int add(List *list, Element *element) {
    for(int i=0; i < list->size+1; i++) {
        if (list->data[i].value == element->value) {
            return 0;
        }
    }
    return 1;
}

int getFrequen(int arr[], int size, int number) {
    int frequen = 0;
    for (int i=0; i < size; i++) {
        if (arr[i] == number) {
            frequen++;
        }
    }
    return frequen;
}

void display(List *list) {
    for (int i=0; i < list->size; i++) {
        
            printf("Value : %d | Frequency : %d \n", list->data[i].value,list->data[i].frequency);
        
    }
}

int main() {
    int arr[NUM] = {5,3,5,2,3,3,5};
    Element element[NUM];
    for (int i=0; i < NUM; i++) {
        element[i].value = arr[i];
        element[i].frequency = getFrequen(arr, NUM, arr[i]);
    }

    List list;
    initList(&list);


    for (int i=0; i < NUM; i++) {
        if (add(&list,&element[i])) {
            // printf("ok");
            list.data[list.size].value = element[i].value;
            list.data[list.size].frequency = element[i].frequency;
            list.size = list.size+1;


            // printf("%d",list.data[i].frequency);
            // 5 3 1
        }
    }

    // printf("%d", list.size);
    // 3
    // printf("%d",list.data[2].value);

    display(&list);


}