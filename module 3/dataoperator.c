#include <stdio.h>
int main()
{
    // Your code goes here
    int retainer = 25000;
    double commisionRate = 0.10;
    int sales = 250000;
    double commision = sales * commisionRate;
    double totalPay = retainer + commision;

    int a = 12;
    int b = 56;
    printf("%d", a % b);
    //printf("%.2f\n", totalPay); 
    return 0;
}