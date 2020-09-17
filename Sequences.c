//
//  Sequences.c
//  
//
//  Created by Cesar Angeles on 07/09/2020.
//  Modified by Ulises Magaña
//


#define Sequences_IMPORT
#include "Sequences.h"


/**
 * Returns the value of the fibonacci sequence at index n calculated sequentially
 * @param
 *      n (long long int):
 *          Index of the fibonacci sequence
 * @return long long int value
*/

long long int Sequences_sfibo(long long int n){
    long long int prev_number = 0, next_number = 1, fibonacci_number = 0;
    int index = 0;
    
    for (index = 0; index < n; index ++){
        fibonacci_number = prev_number;
        prev_number = next_number;
        next_number = next_number + fibonacci_number;
        return fibonacci_number;
    }
    
}


/**
 * Returns the value of the fibonacci sequence at index n calculated recursively
 * @param
 *      n (long long int):
 *          Index of the fibonacci sequence
 * @return long long int value
*/

long long int Sequences_rfibo(long long int number){
    if (number == 0){
        return 0;
    }
    else if(number == 1){
        return 1;
    }
    else{
        return Sequences_rfibo(number - 1) + Sequences_rfibo(number - 2);
    }
}