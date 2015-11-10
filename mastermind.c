//  Created by Jacob Probasco on 11/4/15.
//  Copyright © 2015 jprobasco. All rights reserved.
//
//  Nice features to add:
//  change evaluation to math

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#include <sys/types.h>

void get_guess(int *gues_int);

int main(void){
    srand(time(NULL));
    
    int c[4];
    int *code = c;
    int g[4];
    int *gues = g;
    int hit_save[4];
    
    // Generate 4 random numbers and store as c
    for (int i = 0; i < 4; i++) {
        c[i] = rand() % 10;
    }
    
    // DEBUG - printf("Secret Code is: %d%d%d%d\n", c[0], c[1], c[2], c[3]);
    
    int user_won = 0;
    int guess_count = 0;
    
    /* Compare each digit to all values in the c list */
    while(user_won == 0) {

        int red, r, white, w;
        red = r = white = w = 0;

        /* Populate hit_save with values from c */
        for (int i = 0; i < 4; i++) {
            hit_save[i] = c[i];
        }
        
        /* Get input from user (or NPC), for user, convert to int to list */
        get_guess(g);

        /* Check if gues = code; return winning result */
        if(gues[0] == code[0] && gues[1] == code[1] && gues[2] == code[2] && gues[3] == code[3]){
            printf("You win!  It took you %d guesses.", guess_count);
            user_won = 1;
        }
        
        /* Check reds */
        for (r = 0; r < 4; r++){
            if(gues[r] == code[r]){                 // Check first elements for equivalency. If true,
                hit_save[r] = -1;                   // Set that value to -1 (so it will be ignored later)
                red++;                              // Increment red
            }
        }
        
        /* check for Whites. */
        while (w < 4) {
            if(gues[w] == hit_save[0] ||
               gues[w] == hit_save[1] ||            // Comparison in the expression to reduce amount of loops.
               gues[w] == hit_save[2] ||
               gues[w] == hit_save[3] ){
                white++;
                for(int x = 0; x < 4; x++){
                    if (gues[w] == hit_save[x]){    // Cycle through to remove matching numbers.
                        hit_save[x] = -1;
                    }
                }
            }
            w++;
        }
        guess_count ++;
        printf("%d red, %d white.\n", red, white);
    }
}

void get_guess(int *gues_int){
    char inpt[6];
    printf("Guess a number: ");
    fgets(inpt, sizeof(inpt), stdin);
    
    for(;;) {
        /* Get input from user */
        if(inpt[4] != '\n'){
            printf("Your guess did not consist of four whole-numbers. Try again.\n");
            while(!strchr(inpt, '\n')){
                fgets(inpt, sizeof(inpt), stdin);
            }
        } else {
            inpt[4] = '\0';
        }
        /* Convert user input to int, store in array */
        for (int i = 0; inpt[3] > 0 && i < 4; i++) {
            if (inpt[i] >= '0' && inpt[i] <= '9') { // final data validation
                /* populate guss_int with input[i] data */
                gues_int[i] = inpt[i] - '0';
            }
            else {
                printf("Your guess did not consist of four whole-numbers. Try again.\n");
            }
            
        }
        break;
    }
}
