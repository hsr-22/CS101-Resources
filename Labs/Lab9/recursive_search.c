#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct listNode {
    int data;
    struct listNode *nextPtr;
};

struct listNode *startPtr;

void searchList(int value, struct listNode* currentPtr);
void insertSorted(int value);
int value;

int main(void){
    startPtr = NULL;
    srand(time(NULL));
    for (int i = 0; i < 100; i++){
        int num = 1+rand()%100;
        printf("%d -- ", num);
        insertSorted(num);
    }
    printf("NULL\n");
    printf("Enter a number to be searched\n");
    scanf("%d", &value);
    searchList(value, (struct listNode*)startPtr->nextPtr);
}

void searchList(int value, struct listNode* currentPtr) {
    if(currentPtr->data == value) {
        printf("The number was found at position %p\n", currentPtr);
        return;
    }
    else{
        if(currentPtr->nextPtr != NULL) {
            searchList(value, (struct listNode*)currentPtr->nextPtr);
        }
        else{
            printf("Element not found\n");
            return;
        }
    }
}

void insertSorted(int value) {
    struct listNode *newPtr = (struct listNode*)malloc(sizeof(struct listNode));

    if(newPtr == NULL){
        return;
    }

    newPtr->data = value;
    newPtr->nextPtr = NULL;

    struct listNode *previousPtr = NULL;
    struct listNode *currentPtr = startPtr;

    while(currentPtr != NULL && value > currentPtr->data){
        previousPtr = currentPtr;
        currentPtr = (struct listNode*)currentPtr->nextPtr;
    }

    if(previousPtr == NULL){
        newPtr->nextPtr = startPtr;
        startPtr = newPtr;
    }
    else{
        previousPtr->nextPtr = newPtr;
        newPtr->nextPtr = currentPtr;
    }
}