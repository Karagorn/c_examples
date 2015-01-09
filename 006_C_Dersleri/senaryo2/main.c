/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * int tipindeki diziyi 1-100 arası sayılarla doldurup tek ve çift sayıları listeleyeceğiz.
 * Daha sonra tek ve çift sayıların ortalamasını bulacağız.
 * 
 * Create an integer array and assing to between 1 and 100 numbers. Print even numbers and
 * odd numbers. Last, calculate average even numbers and odd numbers.
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int numbers[100];
    int i, evens=0, odds=0;
    int totalOdd = 0, totalEven = 0;
    //assing the numbers
    for(i=0; i<100; i++) {
        numbers[i] = i+1;
    }
    //print odd numbers and even numbers, also calculate total  each one of them
    for(i=0; i<100; i++) {
        if( (numbers[i] % 2) == 0) {
            printf("Even: %d\n", numbers[i]);
            totalEven += numbers[i];
            evens++;
        }
        else {
            printf("Odd: %d\n", numbers[i]);
            totalOdd += numbers[i];
            odds++;
        }
    }
    //print averages
    printf("Average of even numbers: %d\n", (totalEven / evens) );
    printf("Average of odd numbers: %d\n", (totalOdd / odds) );
    
    return (EXIT_SUCCESS);
}

