/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * 10 boyutlu bir dizi oluşturup içi program tarafından rastgele verilerle dolacak. 
 * Daha sonra kullanıcı bir değe girecek ve girilen değerin dizi de olup olmadığını
 * bulacağız. Eğer dizide varsa konumunu ekrana yazdıralım.
 * 
 * Create an integer array of size 10 and the elements will be random by program.
 * User inputs a number and program check the number in the array. If the number in the array, then
 * print the it's location.
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int array[10];
    int i, number;
    
    //generate random values and assing to array
    for(i=0; i<10; i++) {
        array[i] = (i+2)*3;
    }
    
    //print array
    for(i=0; i<10; i++) {
        printf("%d ", array[i]);
    }
    
    puts("\nPlease, enter a number: ");
    scanf("%d", &number);
    
    //check the array
    for(i=0; i<10; i++) {
        if(number == array[i]) {
            printf("Here your number in array[%d]: %d", i, array[i]);
            return;
        }
    }
    printf("There is no your number.");
    return (EXIT_SUCCESS);
}

