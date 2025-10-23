#include <stdio.h>
#define CAPACITY 100 // limit message queue
#define MAXLENGHT 1000 // limit message content 

struct _Message {
    char content[MAXLENGHT];
    int timeStamp;
};
typedef struct _Message Message;

struct _Queue {
    Message *incoming[CAPACITY];
    int front;
    int back;
};
typedef struct _Queue Queue;

int isIncoming(Queue *q) {
    return q -> back != 0; // which mean queue not empty
}

int isEmpty(Queue *q) {
    return q -> back == 0; // check if queue empty
}

int isFull(Queue *q){
    return q -> back >= CAPACITY; // No more icoming message allow
}

// I choose queue because concept FIFO
// The chat app need enqueue, dequeue message base on timeStamp
// In happy case, time distince each message is not same
// In worse case race condition have conflict

// Incoming message will enqueue by enqueue function
// Message UI will render by dequeue fucntion

void enqueue(Queue *q, Message *message) {
    if (isFull(q)) {
        return; // no more message allow
    }
    q->incoming[q->front] = message;
    q->back++;
}

void dequeue(Queue *q) {
    if (isEmpty(q)) {
        return;
    }
    // show message by q->incoming[]
}

int main() {

}