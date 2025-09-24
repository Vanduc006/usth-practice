#include <stdio.h>
#include <string.h>
#define MAX_URL_LENGHT 10000
#define MAX_TITLE 10000
#define MAX_WEBSITE 100


struct _Website {
    char url[MAX_URL_LENGHT];
    char title[MAX_TITLE];
};
typedef struct _Website Website;

struct _Stack {
    Website history[MAX_WEBSITE];
    int top;
};
typedef struct _Stack Stack;

void initStack(Stack *st) {
    st -> top = 0;
}

int isEmpty(Stack *st) {
    return (st -> top < 0);
}

int getSize(Stack *st) {
    return st->top + 1;
}

void pushHistory(Stack *st, Website newWebsite) {
    if (getSize(st) == MAX_WEBSITE) {
        return;
    }
    else {
        st -> top++;
        st -> history[st->top] = newWebsite;
        // s -> hitory[s->top].url = url;
        // s -> hitory[s->top].title = title;
    }
}

void popHistory(Stack *st) {
    if (isEmpty(st)) {
        return;
    }
    else {
        st -> top--;
    }
}

void initWebsite(Website *web, const char *url, const char *title) {
    strcpy(web -> url, url);
    strcpy(web -> title, title);
}

int main() {
    Website websites[MAX_WEBSITE];

    initWebsite(&websites[0],"https://imasis.id.vn/","IMASIS MIND");
    initWebsite(&websites[1],"https://notepack.vercel.app/","NOTEPACK");

    Stack history;
    initStack(&history);

    // popHistory()
    pushHistory(&history, websites[0]);
    pushHistory(&history, websites[1]);

    popHistory(&history);

    

}