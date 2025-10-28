#include <stdio.h>
void number_reverse(int number)
{
    // Put your code here. The given number is the number
    /*Use the while loop to write a program that will
     print in reverse order the numbers preceding a given 
     number starting with the given number and calculate the product 
     of the numbers.For example if the given number is 5 the output should be 5 4 3 2 1 120 */
    int x = number;
    int product=1;
    while (x>=1)
    {
        /* code */
        printf("%i ", x);
        product *= x;
       

        x--;
        // if (number<1){
        //     number
        // }
    }
    printf("\n%d\n", product);
}
int main(){

    number_reverse(5);
}