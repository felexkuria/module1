#include <stdio.h>
void triangular(int number)
{
    // put your code for the for loop here
    for (int i=1;i<=number;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d ", j*j);
           
        }
        printf("\n");
    }
    return;
}
int main ()
{
triangular(5);
}