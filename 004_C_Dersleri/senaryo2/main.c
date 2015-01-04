/* 
 * File:   main.c
 * Author: Yusuf Karaçin
 *
 * Kullanıcı A, B, C tipindeki üç boyadan birini seçecek.
 * Daha sonra kaç metrekare boya yapılacağını girecek.
 * Ekrana fiyat bilgisi getirilecek.
 * 
 * A = 100.00 TL, B = 125.00 TL, C = 135.45 TL
 * 
 * User should choose one of paint types (A, B, C).
 * Then enter how many square meters will paint.
 * Finally, program will say total cost.
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    char paintType;
    float sm, cost;
    float A = 100.00, B = 125.00, C = 135.45;
    
    puts("Enter paint type (A, B, C), please:");
    scanf("%c", &paintType);
    
    switch(paintType) {
        case 'a':
        case 'A':
            puts("How many square meters will paint?");
            scanf("%f", &sm);
            cost = A * sm;
            printf("Total cost: %.2f", cost);
            break;
        case 'b':
        case 'B':
            puts("How many square meters will paint?");
            scanf("%f", &sm);
            cost = B * sm;
            printf("Total cost: %.2f", cost);
            break;
        case 'c':
        case 'C':
            puts("How many square meters will paint?");
            scanf("%f", &sm);
            cost = C * sm;
            printf("Total cost: %.2f", cost);
            break;
        default:
            printf("Sorry, we don't have %c paint type", paintType);
            break;
    }
    return (EXIT_SUCCESS);
}

