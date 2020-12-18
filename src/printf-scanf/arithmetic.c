// Program to add, subtract and multiply two numbers, given by the user

// include the io header, so that we can use printf and scanf
#include<stdio.h>

// execution of any program starts from `main` function
int main() {
    // declare two variables use to store the numbers
    int a, b;
    
    // print to stdout
    printf("Enter the value of a: ");
    
    // ask for user input (from stdin)
    scanf("%d", &a);
    
    // same for b
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    // print the results
    printf(
        "The sum is %d. The difference is %d. The product is %d.\n",
        a + b,
        a - b,
        a * b
    );
    
    // this is the exit code of our program
    // 0 is convention for successful exectution of program
    return 0;
}
