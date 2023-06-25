/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct listnum
{
    int a;
    struct listnum *nextPtr;
};

struct listnum *printlist();
void reverse(struct listnum *currentPtr);
void insertSort(int p);

struct listnum *startPtr;

void main()
{
    startPtr = NULL;
    srand(time(NULL));
    for (int i = 0; i < 25; i++)
        insertSort(1 + rand() % 100);
    struct listnum *c = printlist();
    reverse(c);
    puts("");
}

void insertSort(int p)
{
    struct listnum *newPtr = malloc(sizeof(struct listnum));
    if (newPtr == NULL)
        return;
    newPtr->a = p;
    newPtr->nextPtr = NULL;

    struct listnum *currentPtr = startPtr;
    struct listnum *previousPtr = NULL;

    while (currentPtr != NULL && p > currentPtr->a)
    {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    if (previousPtr == NULL)
    {
        newPtr->nextPtr = startPtr;
        startPtr = newPtr;
    }
    else
    {
        previousPtr->nextPtr = newPtr;
        newPtr->nextPtr = currentPtr;
    }
}

void reverse(struct listnum *currentPtr)
{
    if (currentPtr->nextPtr == NULL)
    {
        printf("%d ", currentPtr->a);
    }
    else
    {
        reverse(currentPtr->nextPtr);
        printf("%d ", currentPtr->a);
    }
}

struct listnum *printlist()
{
    struct listnum *tp = startPtr;
    if (startPtr == NULL)
        printf("List is empty\n");
    else
    {
        printf("The list is \n");
        struct listnum *currentPtr = startPtr;
        while (currentPtr != NULL)
        {
            printf("%d ", currentPtr->a);
            currentPtr = currentPtr->nextPtr;
        }
    }
    puts("");
    return tp;
}
