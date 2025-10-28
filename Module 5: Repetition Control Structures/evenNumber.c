#include <stdio.h>
int main (){
    // for (int i = 0; i <= 20; i++)
    // {
    //     if(i % 2 == 0){
    //         printf("%d is an even number.\n", i);
    //         printf("end of loop\n");
    //     }
       
    // }
    int i = 0;
    while (i <= 20){
        if(i % 2 == 0){
            printf("%d is an even number.\n", i);
        }
        
        i++;
    }

    // int  number=0;
    // while (number<=20)
    // {
    //     /* code */
    //     if(number % 2 == 0){
    //         printf("%d is an even number.\n", number);
    //     }
    //     else{
    //         printf("%d is an odd number.\n", number);
    //     }
    //     number++;


    // }
    
    // printf("Enter an integer: ");
    // scanf("%d", &number);

    // if(number % 2 == 0){
    //     printf("%d is an even number.\n", number);
    // }
    // else{
    //     printf("%d is an odd number.\n", number);
    // }

    return 0;
}