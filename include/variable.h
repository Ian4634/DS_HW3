#ifndef VARIANLE_H
#define VARIANLE_H
#include <stdio.h>
#include <stdlib.h>
#include <link.h>
#define MAX_LINK_NUM 100

struct node{
    int ID;
    int qMemory;
    struct link* linkHead;
};


typedef struct node Node;
// function declaration
void get_nodes(Node **nodes, int nodeNum);
void get_req(int reqs[][3], int reqNum);
#endif