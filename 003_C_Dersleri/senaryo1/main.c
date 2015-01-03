/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * Kullanıcı mesafe ve hızı girer. Ortalama seyahat süresi hesaplanır.
 * User inputs distance and average speed and program calculates average travel time.
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    double distance, speed, travelTime;
    
    puts("Please, input distance (km):"); //mesafeyi soruyoruz
    scanf("%lf", &distance);
    
    puts("Please, input your average speed (km/h):"); //ortalama hızını soruyoruz
    scanf("%lf", &speed);
    
    travelTime = distance / speed; //zaman = yol / hız formülüne göre hesap yapıyoruz
    printf("I think your travel may take %.2lf hour(s)", travelTime);

    return (EXIT_SUCCESS);
}

