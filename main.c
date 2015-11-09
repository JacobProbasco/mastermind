//  Created by Jacob Probasco on 11/4/15.
//  Copyright © 2015 jprobasco. All rights reserved.
//
//  Nice features to add:
//  change evaluation to math

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>

int get_guess(double *const number, const int numbers, FILE *const in);

int main(void){
    
    int c[4] = { 1, 2, 3, 4 };
    int *code = c;
    int g[4];
    int *gues = g;
    int *hit_save;
    
    int red, r, white, w;
        red = r = white = w = 0;
    // FUNC: Get input from user (or NPC), for user, convert to int to list
    for(;;) {
        char inpt[6];
        printf("Guess a number:");
        fgets(inpt, sizeof(inpt), stdin);
        
        if(inpt[4] != '\n'){
            printf("Your guess did not consist of four whole-numbers. Try again.\n");
            while(!strchr(inpt, '\n')){
                fgets(inpt, sizeof(inpt), stdin);
            }
        } else {
            inpt[4] = '\0';
        }
        for (int i = 0; inpt > 0 && i < 4; i++) {
            if (inpt[i] >= '0' && inpt[i] <= '9') {
                    g[i] = inpt[i] - '0';
                }
            else {
                    printf("Your guess did not consist of four whole-numbers. Try again.\n");
                }

        }
        printf("Your guess was: %d%d%d%d\n", gues[0], gues[1], gues[2], gues[3]);
        break;
    }
    // Generate 4 random numbers and store as c
    
    
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

//int get_guess(int *const number, const int numbers, FILE *const in){
//    int n = 0;
//        /* Read numbers from in, until no more room in array. */
//    while (n < numbers) {
//        /* Try reading the next number. */
//        if (fscanf(in, " %lf", &number[n]) == 1) {
//            /* A number was read successfully. */
//            n++;
//        } else {
//            /* Not a number, or no more input. Break out of while loop. */
//            break;
//        }
//    }
//    /* Return the number of numbers read. */
//    return n;
//}

