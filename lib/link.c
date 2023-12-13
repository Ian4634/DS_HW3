#include<link.h>

void create(struct node **nodes){
    int linkID,linkEnd1, linkEnd2;
    scanf("%d %d %d", &linkID, &linkEnd1, &linkEnd2);

    // two new nodes cause one for each node
    Link *new_node1 = (Link *)malloc(sizeof(Link));
    Link *new_node2 = (Link *)malloc(sizeof(Link));
    
    // assigning values to new_node1 and let linkEnd1 point to it
    new_node1->linkID = linkID;
    new_node1->linkEnd = nodes[linkEnd2];
    new_node1->next = nodes[linkEnd1]->linkHead;
    nodes[linkEnd1]->linkHead = new_node1;
    // assigning values to new_node2 and let linkEnd2 point to it
    new_node2->linkID = linkID;
    new_node2->linkEnd = nodes[linkEnd1];
    new_node2->next = nodes[linkEnd2]->linkHead;
    nodes[linkEnd2]->linkHead = new_node2;
}