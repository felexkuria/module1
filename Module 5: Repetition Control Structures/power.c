#include <stdio.h>
#include <math.h>

void triangle(int number)
{
    int x=1;
    int sum =0;
    while(x<=number)
    {
       
    //   sum+=x;
      sum=sum+x;
        x++;
    }
    {
        printf("%d\n", sum);
    }
}
int main()
{
    triangle(8);
}

