/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * Aşağıdaki seriyi hesaplayan program. n, pozitif ve x reel sayı olacak.
 * 
 * 1/x^2 + 3/x^4 + 5/x^6 + 7/x^8 +⋯+ (2n-1)/x^2n 
 * n=3; x=1 => 9.00
 * 
 * Calculate the above function. n has to be positive integer and x is float 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    int n;
    float x;

    do {
        puts("Enter positive number for n: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    puts("Enter reel number for x: ");
    scanf("%f", &x);

    int count;
    float result = 0;
    
    for (count = 1; count <= (2 * n) - 1; count += 2) {
        result += count / pow(x, count * 2);
        //pow(n,m) fonksiyonu bir sayının(n) kuvvetini(m) bulur.
        //math.h kütüphanesini eklemeyi unutma.
        //pow(n,m) returns n raised to the power of m.
        //don't forget to add math.h library.
    }

    printf("Result: %f", result);
    return (EXIT_SUCCESS);
}

