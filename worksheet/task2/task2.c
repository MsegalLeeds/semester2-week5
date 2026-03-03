/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Marc Segal
 * ID: 201934205
 */

#include <stdio.h>
#include <string.h>

int main(void){
    long decimal = 0;
    char hex[9];

    printf("Enter a hexadecimal:");
    scanf("%8s", hex);

    for (int i = 0; i < strlen(hex); i++) {
        int value;

        if (hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            value = hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            value = hex[i] - 'a' + 10;
        else {
            printf("Error: Invalid Hexadecimal\n");
            return 0;
        }

        decimal = decimal * 16 + value;
    }

    printf("decimal:%ld\n", decimal);

    return 0;
}