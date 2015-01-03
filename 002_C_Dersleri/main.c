/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * Girilen kilometre değerinin kaç mil olduğunu hesaplayan program
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    double km; //kullanıcının gireceği kilometre değerini saklayacağım değişken
    double mil = 0.6213; //1 mil = 0.6213 km
    
    puts("Lütfen kilometre cinsinden bi değer giriniz:");
    scanf("%lf", &km);
    
    mil = km * mil;
    printf("%lf km %lf mil yapar", km, mil);

    return (EXIT_SUCCESS);
}

