// Program to calculate simple interest.

#include <stdio.h>

int main() {
        double amount, time, rate;
        printf("Enter Amount: ");
        scanf("%lf", &amount);
        printf("Enter Time(in years): ");
        scanf("%lf", &time);
        printf("Enter interest per year(in percent): ");
        scanf("%lf", &rate);

        // note rate is in percent so we have to divide it by 100.0
        double interest = amount * time * rate / 100.0;

        printf("\nThe interest is %lf\n", interest);
        return 0;
}