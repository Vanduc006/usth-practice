// Suppose we would like to implement a queue system for a commercial website.
// Given that the website offers a list of items, each item has a limited quantity in
// stock.

// Implement a queue of customers, and each customer can buy only a few
//  products among the available items.

//  Determine the item name, quantity, and price in stock.
//  Specify a queue of n customers; each customer can buy k products from one
// item (k is different for each customer).

//  Customers take turns to enter (enqueue) and leave (dequeue) the queue ac-
// cording to the FIFO order to purchase wanted products.

//  If a customer successfully purchases products, display a message and reduce
// the number of products in stock. Otherwise, display a warning message if the
// item has been run out.

// Implement the above problems in C/C++ using a Queue data structure. Write
// a main function for testing all written functions (init(), display(), enqueue(), de-
// queue(),...).

#include <stdio.h>
#include <string.h>
#define maxName 1000
#define maxCustomer 100
// #define max
struct _Item
{
    char productName[maxName];
    double price;
    int quantity;
};

typedef struct _Item Item;

struct _Customer
{
    // char customerName[maxName];
    int amount;
    char buyProductName[maxName];
};
typedef struct _Customer Customer;

struct _Queue
{
    // int customer[maxCustomer];x`
    Customer customer[maxCustomer];
    int front;
    int back;
};
typedef struct _Queue Queue;

void intitQeue(Queue *q)
{
    q->front = 0;
    q->back = 0;
}

int isEmpty(Queue *q)
{
    return q->back == q->front;
}

int isFull(Queue *q)
{
    return q->back == maxCustomer;
}

int length(Queue *q)
{
    int I = q->back - q->front;
    return I;
}

int enQueue(Queue *q, Customer newCustomer)
{
    if (isFull(q))
    {
        // return "No more slot for you"
        return -1;
    }

    q->customer[q->back] = newCustomer;
    q->back++;
    return 1;
}

int deQeue(Queue *q, Customer *removeCustomer)
{
    // Customer removeCustomer = q->customer[q->front];
    if (isEmpty(q))
    {
        return 0;
    }

    *removeCustomer = q->customer[q->front];

    for (int i = q->front + 1; i < q->back; i++)
    {
        q->customer[i - 1] = q->customer[i]; // shift to left
    }
    q->back--;

    return 1;
}

void initItem(Item *i, const char *productName, double price, int quantity)
{
    strcpy(i->productName, productName);
    i->price = price;
    i->quantity = quantity;
}

void initCustomer(Customer *c, const char *buyProductName, int amount)
{
    strcpy(c->buyProductName, buyProductName);
    c->amount = amount;
}

void purchase(Customer customer, Item items[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(customer.buyProductName, items[i].productName) == 0)
        {
            if (items[i].quantity >= customer.amount)
            {
                items[i].quantity -= customer.amount;
            }
            else
            {
                printf("Run out of product %s", customer.buyProductName);
            }
            return;
        }
    }
}

int currentStock(Item items[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s | Price: %.2f | Quantity: %d\n", items[i].productName, items[i].price, items[i].quantity);
    }
}

int main()
{
    int numItem = 2;
    Item items[2];

    // add item to stock
    initItem(&items[0], "Iphone 17", 3000, 100);
    initItem(&items[1], "Television", 5000, 100);

    Customer customer1;
    Customer customer2;
    // add customer
    initCustomer(&customer1, "Iphone 17", 10);
    initCustomer(&customer2, "Television", 100);

    Queue q;
    intitQeue(&q);
    enQueue(&q, customer1);
    enQueue(&q, customer2);

    currentStock(items, numItem);

    Customer current;
    while (!(isEmpty(&q)))
    {
        deQeue(&q, &current);
        printf("\nServing customer requesting %d of %s\n", current.amount, current.buyProductName);
        purchase(current, items, numItem);
        currentStock(items, numItem);
    }
}