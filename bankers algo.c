#include <stdio.h>
#include <stdbool.h>
 
int main() {
    int curr[5][5];
    int max_need[5][5];
    int avl[5];
    int alloc[5] = {0, 0, 0, 0, 0};
    int max_res[5];
    int running[5];
 
    int i, j, exec, r, p;
    int count = 0;
    bool safe = false;
 
    printf("\nEnter the number of resources: ");
    scanf("%d", &r);
 
    printf("\nEnter the number of processes: ");
    scanf("%d", &p);
    for (i = 0; i < p; i++) {
        running[i] = 1;
        count++;
    }
 
    printf("\nEnter Total value of each resource : ");
    for (i = 0; i < r; i++)
        scanf("%d", &max_res[i]);
 
    printf("\nEnter Allocated Resource Table: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++)
            scanf("%d", &curr[i][j]);
    }
 
    printf("\nEnter Maximum Need table: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++)
            scanf("%d", &max_need[i][j]);
    }
 
    printf("\nThe Total value of each resource is : ");
    for (i = 0; i < r; i++)
        printf("%d ", max_res[i]);
 
    printf("\nThe Allocated Resource Table:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++)
            printf("\t%d", curr[i][j]);
        printf("\n");
    }
 
    printf("\nThe Maximum Need Table:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++)
            printf("\t%d", max_need[i][j]);
        printf("\n");
    }
 
    
}