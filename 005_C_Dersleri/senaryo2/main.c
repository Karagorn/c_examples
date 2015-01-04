/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * Bir okyanusta 1044 tane kelebek balığı, 4544 tane palyaço balığı vardır. 
 * 1 yılda kelebek balıkları %5.71, 
 * palyoça balıkları 1.07 oranında çoğalıyor. 
 * Kaç yıl sonra kelebek balıklarının sayısının, 
 * palyaço balıklarının sayısını geçeceğini hesaplayan program
 * 
 * There are 1044 chelmon fish and 4544 anemon fish in a ocean. 
 * Number of chelmon fish increase 5.71%, number of anemon fish increase 1.07% every year.
 * Calculate how many years later number of chelmon fish exceed number of anemon fish.
 */

#include <stdio.h>
#include <stdlib.h>

#define CHELMON_INC (5.71 / 100)
#define ANEMON_INC  (1.07 /100)
int main(int argc, char** argv) {

    int chelmonFish = 1042, anemonFish = 4544; 
    int year = 0;
    
    while(chelmonFish < anemonFish) {
        chelmonFish += chelmonFish * CHELMON_INC;
        anemonFish += anemonFish * ANEMON_INC;
        year++;
        printf("%d year laters, chelmons: %d, anemons: %d\n", year, chelmonFish, anemonFish);
    }
    return (EXIT_SUCCESS);
}

