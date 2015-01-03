/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * Girilen kilometre değerinin kaç mil olduğunu hesaplayan program
 * calculate mil to km
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    double km; //kilometre değerini saklayacağım değişken
    double mil = 0.6213; //1 mil = 0.6213 km
    
    puts("Lütfen kilometre olarak bir değer giriniz:"); //input message
    scanf("%lf", &km);
    
    mil = km * mil;
    printf("%lf km = %lf mil", km, mil);

    return (EXIT_SUCCESS);
}

