#include <stdio.h>
#include <stdlib.h>
#define DECK_SIZE 52

void init_deck(int deck[]) {
    for(int i = 0; i < DECK_SIZE; i++) {
        int suit = i / 13 + 1;
        int number = i % 13 + 1;
        deck[i] = suit * 100 + number;
    }
    return;
}

void print_deck(int deck[]) {
    for(int i = 0; i < DECK_SIZE; i++) {
        int card =deck[i];
        int suit = card / 100;
        int number = card % 100;
        printf("Card %d ", i+1);

        switch (number) {
        case 1:
            printf("Ace of ");
            break;
        case 2:
            printf("Two of ");
            break;
        case 3:
            printf("Three of ");
            break;
        case 4:
            printf("Four of ");
            break;
        case 5:
            printf("Five of ");
            break;
        case 6:
            printf("Six of ");
            break;
        case 7:
            printf("Seven of ");
            break;
        case 8:
            printf("Eight of ");
            break;
        case 9:
            printf("Nine of ");
            break;
        case 10:
            printf("Ten of ");
            break;
        case 11:
            printf("Jack of ");
            break;
        case 12:
            printf("Queen of ");
            break;
        case 13:
            printf("King of ");
            break;
        
        default:
            break;
        }

        switch (suit) {
        case 4:
            printf("Spades\n");
            break;
        case 3:
            printf("Hearts\n");
            break;
        case 2:
            printf("Diamonds\n");
            break;
        case 1:
            printf("Clubs\n");
            break;
        default:
            break;
        }
    }
}

void shuffle_deck(int deck[]) {
    for(int i = 0; i < DECK_SIZE; i++) {
        int j;
        do {
            j = rand() % 52;
        }
        while(i == j);

        int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}