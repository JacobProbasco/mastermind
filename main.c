//
//  main.c
//  mastermind
//
//  Created by Jacob Probasco on 11/4/15.
//  Copyright © 2015 jprobasco. All rights reserved.
//
//  Nice features to add:
//  change evaluation to math

#include <stdio.h>
#include <stdlib.h>
/*
#include <time.h>
#include <string.h>
*/

// Prototypes

/*
struct node{
    struct node *next;
    int value;
};

void check_num(struct node *num){
    while(num){
        
        printf("%d ", num->value);
        num = num->next;
    }
}
*/

int code[4] = {3,2,3,4};
int gues[4] = {1,3,5,3};

int red = 0;
int white = 0;
int quit = 0;

//////////////////// mastermind ////////////////////

int main(int argc, char *argv[]) {

    int i = 0;
        do {
            code[0] == gues[i] ? red++ :
                code[1] == gues[i] ||
                code[2] == gues[i] ||
                code[3] == gues[i] ? white++ :
            code[i];
            i++;
        } while (i < 4);
    
        printf("Code[0] is %d. Red is %d. White is %d./n", code[0], red, white);
        quit = 1;
    }
    
    /*
    struct node *one, *two, *three, *four;
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));
    
    one->next = two;
    code[0] == gues[0] ? red++ :
    code[0] == gues[1] ||
    code[0] == gues[2] ||
    code[0] == gues[3] ? white++ :
    code[0];
    
    one->value = 1;
    
    two->next = three;
    two->value = 2;
    
    three->next = four;
    three->value = 3;
    
    four->next = NULL;
    four->value = 4;
    
    check_num(one);
    */
}

/*
 
 
 int code[4] = {1,2,3,4};
 int gues[4] = {1,3,5,3};
 int red = 0;
 int white = 0;
 
 //////////////////// mastermind ////////////////////
 
 int main(int argc, char *argv[]) {
 for (int c = 0; c < 16; c++){
 code[c] == guess[c] ? red++ : code[c];
 }
 
// strtol(char *restrict, char **endptr, int base);
    
// strcmp(a,b) == 0 // compare two strings
    
// Generate 4 random numbers and store as code
    
// FUNC: Get input from user (or NPC), for user, convert to int to list
   
// FUNC: Process input, store it.
/// Account for 0s
    
// FUNC: Check input against code

/// Compare each digit to all values in the code list
//// (for i in code[i]) When it reaches a match, compare the match index to the value in the same index# in code.
///// if they are the same, red ++ and cat that number to already. else,
    
// Print results to user






 
 strtol(char *restrict, char **endptr, int base);
 
// strcmp(a,b) == 0 // compare two strings

int code[4] = { 1, 2, 3, 4 };
 
void check_num(struct node *numone){
    while(tip){
        printf("%d ", numone->value);
        numone = numone->next;
        numone = numone->next;
    }
}

 struct node one, two, three, four;

 one.next = &two;
 one.value = code[1];
 
 two.next = &three;
 two.value = code[2];
 
 three.next = &four;
 three.value = code[3];
 
 four.next = NULL;
 four.value = code[4];
 
 */

////////////////////// NPC ///////////////////////
