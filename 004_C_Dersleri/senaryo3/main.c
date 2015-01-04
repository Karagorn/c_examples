/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * Aşağıdaki fonksiyonu hesaplayan program
 * 
 * f(x) = (x<1) => x^2 + 3x, (x>=1) => 3x+4
 * 
 * Calculte the above function
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    float x, fx;
    
    puts("Enter a number please:");
    scanf("%f", &x);
    
    if(x >= 1) {
        fx = (3*x) + 4;
    }
    else {
        fx = (x * x) + (x*3);
    }
    printf("f(x) = %.3f", fx);
    
    return (EXIT_SUCCESS);
}

