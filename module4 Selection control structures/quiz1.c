# include <stdio.h>
void grade(int mark)
{
    // Your code goes here
    // use mark as the variable for checking the conditions as follows
    if(mark<=40){
        printf("Fail\n");
    }else if (mark>40 && mark<=49){
        printf("D\n");
    }
    else if(mark>=50 && mark<=59){
        printf("C\n");
    }
    else if (mark >= 60 && mark <= 69)
    {
        printf("B\n");
    }
    else if (mark >= 70 && mark <= 100)
    {
        printf("A\n");
    }else{
        printf("Invalid mark\n");
    }
}
int main (){
    grade(50);
}