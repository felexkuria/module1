#include <stdio.h>
void number(int number)
{
    int i = number;
    int product = 1;
    while (i >= 1)
    {
        printf("%d\n", i);
        product *= i;
        // printf("%d\n", product);
        i--;
    }
    printf("%d\n", product);
}
int main (){
    
    number(5);
    return 0;
}