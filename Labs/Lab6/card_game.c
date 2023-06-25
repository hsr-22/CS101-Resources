/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "card.h"

void main(void) {
    srand(time(NULL));
    int deck[DECK_SIZE];
    init_deck(deck);
    shuffle_deck(deck);
    shuffle_deck(deck);
    print_deck(deck);

    int i;
    for(i = 0; i < DECK_SIZE; i++) {
        if(deck[i] % 100 == 1) {
            break;
        }
    }
    printf("%d cards dealt before first ace\n", i);
}
