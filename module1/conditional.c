// #include <stdio.h>

// int main()
// {
//   int age=100;

//   if(age<18)
//   {
//     printf("You are a minor.\n");
//   }
//   else if(age>=18 && age<65)
//   {
//     printf("You are an adult.\n");
//   }
//   else
//   {
//     printf("You are a senior citizen.\n");
//   }

//   return 0;
// }
 #include <stdio.h>
 int main (){
  //  printf("Hello World \n");
  int age;
  printf("Enter Your Age ");
  scanf("%i", &age);
  if (age<=0){
    printf("%i is invalid Age\n", age);
  }else if (age<13 )
  {
    /* code */
    printf("%i You are a baby\n", age);
  }
  else if (age>=13 && age <= 19)
  {
    /* code */
    printf("%i You are a teen\n", age);
  } else
  {
    printf("%i you are an adult\n", age);
  }
  
 }