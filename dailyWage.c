#include <stdio.h>

int main() {
    int hours, total;
    int hourly_rate = 10;
    int overtime_rate = 15; 

    printf("Enter total hours worked today: ");
    if (scanf("%d", &hours) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (hours > 8) {
        total = (8 * hourly_rate) + ((hours - 8) * overtime_rate);
        printf("You worked overtime! Your wage today is: %d $\n", total);
    } 
    else if (hours > 0) {
        total = hours * hourly_rate;
        printf("Your wage today is: %d $\n", total);
    } 
    else {
        printf("No hours worked today.\n");
    }

    return 0;
}
