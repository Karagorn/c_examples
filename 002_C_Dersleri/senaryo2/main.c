/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * 3 basamaklı bi sayının basamak değerlerini hesaplayacağız
 * Calculate 3-digit number of digits values
 * 571 => 5, 7, 1
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int number, hundred, ten, one;
    
    puts("Please, input 3-digit number:");
    scanf("%d", &number);
    
    hundred = (number % 1000) / 100;
    ten = (number % 100) / 10;
    one = (number % 10);
    
    printf("%d, %d, %d", hundred, ten, one);
    return (EXIT_SUCCESS);
}

