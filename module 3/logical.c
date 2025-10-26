// As a newly employed programmer in Company ABC, you are given your first assignment of writing a simple program to do the following:
// Accept two real numbers 
// Adds the two numbers
// Subtract the second number from the first one
// Divides the first number by the second one
// Calculate the remainder of the division of the first number by the second number 
// Multiplies the two numbers

// Note: Write the logical of the operations. The values of the numbers are provided as test cases
#include <stdio.h>

// Function declarations
float add(float a, float b);
float sub(float a, float b); 
float divi(float a, float b);
float mod(float a, float b);
float mult(float a, float b);

int main(void)
{
    // Test case values
    float num1 = 50;
    float num2 = 20;

    // Perform operations
    float sum = add(num1, num2);
    float difference = sub(num1, num2);
    float division = divi(num1, num2);
    float remainder = mod(num1, num2);
    float product = mult(num1, num2);

    // Print results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference); 
    printf("Division: %.2f\n", division);
    printf("Remainder: %.2f\n", remainder);
    printf("Product: %.2f\n", product);

    return 0;
}

// Function definitions
float add(float num1, float num2)
{
    // add code to add two numbers here
    return num1 + num2;
}
float sub(float num1, float num2)
{
    // code to subtract two numbers goes here
    return num1 - num2;
}
float divi(float num1, float num2)
{

    // code to divide two numbers goes here
    return num1 / num2;
}
float mod(float num1, float num2)
{
    // code to get the reminder of the two numbers goes here
    return (float)((int)num1 % (int)num2);
}
float mult(float num1, float num2)
{
    // code to multiply two numbers goes here
    return num1 * num2;
}
