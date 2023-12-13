#include <stdio.h>
#include <stdlib.h>

int main(){
    int **arr = malloc(sizeof(int *) *3);
    for(int **temp = arr, i=0; i<3;temp++, i++){
        *temp = malloc(sizeof(int) *2);
    }
    for(int **temp = arr, i=0; i<3;temp++, i++){
        for(int *col = *temp, j=0;j<2;col++,j++){
            scanf("%d", col);
        }
    }

    for(int **temp = arr, i=0; i<3;temp++, i++){
        for(int *col = *temp, j=0;j<2;col++, j++){
            printf("%d ", *col);
        }
        printf("\n");
    }
}