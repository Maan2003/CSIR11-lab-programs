#include <stdio.h>

int main() {
    // using unsigned because no negative marks
    unsigned int marks;
    printf("Enter marks(out of 100): ");
    if(scanf("%u", &marks) || marks > 100) {
        printf("Invalid marks\n");
        // invalid input exit code
        // see more: https://www.freebsd.org/cgi/man.cgi?query=sysexits
        return 65;
    }
    
    char* grade;
    if (marks > 90) {
        grade = "A+";
    } 
    // NOTE: ommiting marks < 90, because it is proven true by above if
    else if (marks > 80) { 
        grade = "A";
    } else if (marks > 60) {
        grade = "B";
    } else if (marks > 40) {
        grade = "C";
    } else if (marks > 20) {
        grade = "D";
    } else {
        grade = "E";
    }

    printf("Your grade is %s\n", grade);
    return 0;
}