#include <stdio.h>
#include <string.h>

// Function to convert decimal to Roman Numerals
void printRoman(int number) {
    int num[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    const char* sym[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int i = 12;

    while (number > 0) {
        int div = number / num[i];
        number = number % num[i];
        while (div--) {
            printf("%s", sym[i]);
        }
        i--;
    }
}

// Function to convert Roman to decimal
int romanToDecimal(const char* roman) {
    int decimal = 0;
    int previousValue = 0;

    for (int i = strlen(roman) - 1; i >= 0; i--) {
        int currentValue = 0;

        switch (roman[i]) {
            case 'I':
                currentValue = 1;
                break;
            case 'V':
                currentValue = 5;
                break;
            case 'X':
                currentValue = 10;
                break;
            case 'L':
                currentValue = 50;
                break;
            case 'C':
                currentValue = 100;
                break;
            case 'D':
                currentValue = 500;
                break;
            case 'M':
                currentValue = 1000;
                break;
        }

        if (currentValue < previousValue) {
            decimal -= currentValue;
        } else {
            decimal += currentValue;
        }

        previousValue = currentValue;
    }

    return decimal;
}

int main() {
    int number;
    char roman[20];

    //printf("Enter a decimal number: ");
    scanf("%d", &number);

    //printf("Enter a Roman numeral: ");
    scanf("%s", roman);


    printRoman(number);
    printf("\n");

    int decimalValue = romanToDecimal(roman);
    printf("%d\n", decimalValue);

    return 0;
}
