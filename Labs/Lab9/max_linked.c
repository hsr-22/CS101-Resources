#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct listNode {
    int data;
    struct listNode *nextPtr;
};

struct listNode *startPtr;

void insertUnsorted(int value);
int printList();

int main(void) {
    startPtr = NULL;
    srand(time(NULL));
    printf("");
    for(int i = 0; i < 25; i++) {
        int n = 1 + rand()%100;
        insertUnsorted(n);
    }
    printf("Maximum value of item is: %d", printList());
}

void insertUnsorted(int value) {
    struct listNode *newPtr = (struct listNode*)malloc(sizeof(struct listNode));

    if(newPtr == NULL) {
        return;
    }

    newPtr->data = value;
    newPtr->nextPtr = NULL;

    struct listNode *previousPtr = NULL;
    struct listNode *currentPtr = startPtr;

    while(currentPtr != NULL) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    if(previousPtr == NULL) {
        newPtr->nextPtr = startPtr;
        startPtr = newPtr;
    }
    else {
        previousPtr->nextPtr = newPtr;
        newPtr->nextPtr = currentPtr;
    }
}

int printList() {
    int max = startPtr->data;
    if(startPtr == NULL) {
        puts("List is empty.\n");
    }
    else{
        puts("The list is:");

        struct listNode *currentPtr = startPtr;
        while(currentPtr != NULL) {
            printf("%d --> ", currentPtr->data);
            int num = currentPtr->data;
            num >= max ? max=num : max=max;
            currentPtr = currentPtr->nextPtr;
        }
        
        puts("NULL\n");
    }
    return max;
}