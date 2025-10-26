#include <stdio.h>
int main(){
    
    int age;
    do
    {
        printf("Enter Your age to enter the club::\n");
        scanf("%d", &age);

    } while (age<=18);
    printf(" At %d you can enter the club::\n",age);
}