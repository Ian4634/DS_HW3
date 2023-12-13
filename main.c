#include<stdio.h>
#include<stdlib.h>
#include<variable.h>
#include <link.h>
int main(){

    int nodeNum, linkNum, timeSlot, reqNum;
    scanf("%d %d %d %d", &nodeNum, &linkNum, &timeSlot, &reqNum);
    Node *nodes[nodeNum];
    int reqs[2][reqNum];
    // read and create nodes
    get_nodes(&nodes[0], nodeNum);

    // read links and attach them to corresponding nodes
    for(int i=0;i<linkNum;i++){
        create(&nodes[0]);
    }

    // read requests and store in reqs
    get_req(reqs, reqNum);
    // test 
    for (int i=0;i<nodeNum;i++){
        printf("id: %d qMemory: %d\n", nodes[i]->ID, nodes[i]->qMemory);
        
        for(Link *temp = nodes[i]->linkHead;temp!=NULL; temp = temp->next){
            printf("linkend: %d ", temp->linkEnd->ID);
        }
        printf("\n\n");
    }
    return 0;
}