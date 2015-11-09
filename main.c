//  Created by Jacob Probasco on 11/4/15.
//  Copyright © 2015 jprobasco. All rights reserved.
//
//  Nice features to add:
//  change evaluation to math

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>


int main(void){
    
    int c[4] = { 1, 2, 3, 4 };
    int *code = c;
    int g[4] = { 1, 3, 4, 4 };
    int *gues = g;
    
    int *hit_save;
    
    int red, r, white, w;
        red = r = white = w = 0;
    
    // Generate 4 random numbers and store as c
    
    // FUNC: Get input from user (or NPC), for user, convert to int to list
    
    // FUNC: Process input, store it.
    /// Account for 0s
    
    // FUNC: Check input against c
    
    // Compare each digit to all values in the c list
    
    
    /// (for i in c[i]) When it reaches a match, compare the match index to the value in the same index# in c.
    
    
    /* Check if gues = code; return winning result */
    if(gues[0] == code[0] && gues[1] == code[1] && gues[2] == code[2] && gues[3] == code[3]){
        printf("Winning!\n");
    }
    
    /* Set counters. Copy code into hit_save to track correct white and red guesses. */
    r = w = 0;
    hit_save = c;
    
    for (r = 0; r < 4; r++){
        printf("RED %d START...\n(guess) is: %d. \n(code) is: %d. \nRed Count: %d. \nWhite is: %d. \n", r, gues[r], hit_save[r], red, white);
        if(gues[r] == code[r]){                 // Iheck first elements for equivalency. If true,
            hit_save[r] = -1;                   // Set that value to -1 (so it will be ignored)
            red++;                              // Increment red
        }
        printf("RED %d END...\n(guess is: %d. \n(code) is: %d. \nRed Count: %d. \nWhite is: %d. \n", r, gues[r], hit_save[r], red, white);
    }
    
    // check for Whites.
    while (w < 4) {
        printf("White %d START...\n(guess) is: %d. \n(code) is: %d. \nRed Count: %d. \nWhite is: %d. \n", w, gues[w], hit_save[w], red, white);
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
        printf("White %d START...\n(guess) is: %d. \n(code) is: %d. \nRed Count: %d. \nWhite is: %d. \n", w, gues[w], hit_save[w], red, white);
        w++;
        }

    printf("Check Complete!\n(guess) is: %d%d%d%d. \nHit_Save is: %d%d%d%d. \nRed Count: %d. \nWhite is: %d. \n",gues[0], gues[1], gues[2], gues[3], hit_save[0], hit_save[1], hit_save[2], hit_save[3], red, white);
    // cleanup for another guess.
    r = w = 0;
    hit_save = c;
    
}



