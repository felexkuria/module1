/* Assume you are a software developer in Company OUK. You are required to create a program to store student details. 
The students details contain their names, age, height, weight and their KCSE grade.
 You are required to create variables that will sore the details of the following student.
Names: Wanjiku
Age:25
Height: 5.2
Weight: 67.67
KCSE Grade: B
The output of your code should look should look as follows:
Names: Wanjiku
Age: 25
Height:5.2
Weight:67.67
KCSE Grade:B
*/
#include <stdio.h>

int main()
{
    char name[20] = "Wanjiku";
    int age = 25;
    float height = 5.2;
    float weight = 67.67;
    char grade = 'B';
    printf("Names: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height:%g\n", height);
    printf("Weight:%g\n", weight);
    printf("KCSE Grade:%c\n", grade);
    return 0;
}
