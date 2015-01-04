/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * Artık yıl hesaplayan program
 * Artık yıl, 4'ün katı olmalıdır. 
 * Eğer yıl 100'ün katıysa 400'e de kalansız olarak bölünmelidir. 
 * 
 * Calculate leap year
 * The year is evenly divisible by 4;
 * If the year can be evenly divided by 100, it is NOT a leap year, unless;
 * The year is also evenly divisible by 400. Then it is a leap year.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int year;
    
    puts("Enter a year, please:");
    scanf("%d", &year);
    

    if(year < 0) {
        puts("You have to enter positive integer.");
    }
    else {
        if( (year % 4) == 0 ) {
            if( (year % 100) == 0 ) {
                if( (year % 400) == 0 )
                    puts("Leap year!");
                else
                    puts("Not leap year!");
            } 
            else
                puts("Leap year!");
        }
        else
            puts("Not leap year!");
    }

    /**
     * Alternative solution 
     * (http://stackoverflow.com/questions/3220163/how-to-find-leap-year-programatically-in-c)
     * 
    if ((year & 3) == 0 && ((year % 25) != 0 || (year & 15) == 0)) {
        puts("Leap year!");
    }
    else {
        puts("Not leap year!");
    }
     * 
     */
    return (EXIT_SUCCESS);
}

