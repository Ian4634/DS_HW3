#ifndef LINK_H
#define LINK_H
#include <variable.h>
struct link{
    int linkID;
    struct node *linkEnd;
    struct link *next;
};

typedef struct link Link;

void create(struct node **nodes);
#endif