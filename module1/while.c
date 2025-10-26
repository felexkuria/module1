#include <stdio.h>
int main (){
    // int month, shift,noofpeople;

    // month = 31;
    // shift = 2;
    // noofpeople = 3;

    // while (month>=0)
    // {

    //     if(month==0){
    //         break;
    //     }else{
    //         month -= 4;
    //         printf(" this is your shift on %d   \n", month);
    //     }
    // }
    // printf("Done \n");
    // return 0;
    // int tankLevel = 100;
    // while (tankLevel>0)
    // {
    //     /* code */
    //     tankLevel -= 20;
    //     printf("this tank level %i\n", tankLevel);
    // }
    int waterLevel = 10; // Bucket starts with 10 units

    // Check the condition: IS the waterLevel greater than 0?
    while (waterLevel > 0)
    {
        printf("Draining... water is now at %i\n", waterLevel);
        waterLevel--; // Decrease the water level
    }

    printf("The bucket is empty.\n");
}