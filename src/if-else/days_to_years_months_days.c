#include <stdio.h>

int main() {
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    
    // 365.25 to handle leap years
    // this will truncate so 3.01 years = 3 years
    int years = days / 365.25;
    
    // NOTE: expilicit (int) is required here, because x -= y is converted to x = x - y;
    // so there is difference between x = (int)(x - some_double) and x = x - (int)some_double
    // lets assume some_double = 0.9, x = 1;
    // first, x = (int)(x - some_double) = (int)(1 - 0.9) = (int)(0.1) = 0
    // second, x = x - (int)some_double = 1 - (int)0.9 = 1 - 0 = 1
    //
    // this will also truncate, so 2 years = 730.50 = 730 which is correct
    // TODO: handle double imprecision (example: 4 years may equal 1460.99999998)
    days -= (int)(years * 365.25);

    int days_in_months[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
    };

    // for leap year days in Feb. is 29
    if(years % 4 == 3) {
        days_in_months[1] = 29;
    }

    int month = 0;
    while (month <= 12 && days_in_months[month] <= days) {
        days -= days_in_months[month];
        month++;
    }

    printf("%d years, %d months and %d days\n", years, month, days);
    return 0;
}
