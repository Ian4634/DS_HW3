#include <variable.h>

void get_nodes(Node **nodes, int nodeNum){
    int ID, qMemory;
    for (int i=0;i<nodeNum;i++){
        scanf("%d %d", &ID, &qMemory);
        Node *new_node = malloc(sizeof(Node));
        new_node->ID = ID;
        new_node->qMemory = qMemory;
        new_node->linkHead = NULL;
        *nodes = new_node;
        nodes++;
    }
}

void get_req(int reqs[][3], int reqNum){
    for (int i=0;i<reqNum;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &reqs[i][j]);
        }
    }
}