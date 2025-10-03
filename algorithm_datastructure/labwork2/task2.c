#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXID 125
#define CAPACITY 10


struct _Car {
    int passenger;
    char id[MAXID];
    struct _Car *pnext;
};
typedef struct _Car Car;

struct _Train {
    int size;
    // Car car[CAPACITY];
    Car *pHead;
};
typedef struct _Train Train;

void initTrain(Train *train) {
    train -> size = 0;
    train -> pHead = NULL;
}


int isEmpty(Train *train) {
    return (train -> size == 0);
}

int isFull(Train *train) {
    return (train -> size >= CAPACITY);
}

void initCar(Car *car,int passenger, const char *id) {
    if (passenger > CAPACITY) {
        return;
    }
    car -> passenger = passenger;
    // car -> id = id;
    strcpy(car -> id, id);
    car -> pnext = NULL;
    // return car;
}

void insertFirst(Car *car, Train *train) {
    if (isEmpty(train)) {
        train -> pHead = car;
        train -> size++;
    }
}

void insert(Car *pnew, Car *ptr, Train *train) {
    if (isEmpty(train)) {
        return;
    }

    if (isFull(train)) {
        return;
    }

    pnew -> pnext = ptr -> pnext;
    ptr -> pnext = pnew;
    train -> size++;
}

void removeCar(Train *train, const char *id) {
    Car *car = train -> pHead;
    if (strcmp(car -> id,id) == 0) {
        train -> pHead = car -> pnext;
        train -> size--;
        return;
    }
    Car *q = NULL;
    car = q;
    car = car -> pnext;

    while (car != NULL && strcmp(car -> id,id) == 1) {
        q = car;
        car = car -> pnext;
    }

    // remove car when while break
    if (car != NULL) {
        q -> pnext = car -> pnext;
        train -> size--;
    }
    
}

void updatePassenger(Train *train,Car *car, int newPassenger) {
    car -> passenger = newPassenger;
    // if (newPassenger)
    if (car -> passenger == 0) {
        removeCar(train, car -> id);
        printf("No more passenger car have id: %s is removed",car -> id);
        // remove car in train
    }
}


int main() {
    Train train;
    initTrain(&train);

    Car car1;
    Car car2;
    Car car3;

    initCar(&car1, 5, "id1");
    initCar(&car2, 5, "id2");
    initCar(&car3, 5, "id3");

    insertFirst(&car1,&train); // car1 at first index
    insert(&car2,&car1,&train); // add car2 before car1
    insert(&car3,&car1,&train); // add car3 before car1 after car2 1->3->2


    // printf("test");
    updatePassenger(&train,&car3,7);

    Car *car = train.pHead;
    printf("\n");

    while (car != NULL) {
        printf("Car id: %s, have %d passenger \n",car -> id,car -> passenger);
        car = car -> pnext;
    }

}

