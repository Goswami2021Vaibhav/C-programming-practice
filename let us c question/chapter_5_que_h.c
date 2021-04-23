// Write a program to receive an integer and find its octal equivalent.

// using while loop.

#include<stdio.h>

int main(){
   int num , r, i=1 , result=0;

   printf("Enter a decimal number = ");
   scanf("%d", &num);
    if(num<8)
   {
    printf("Please enter a number greater than 8 or equal to 8");
   }

   
    else
    {
            while (num)
            {
                r = num % 8;
                result = result + r * i;
                num = num / 8;
                i = i * 10;   
            } 
        
               printf("Octal conversion of the enterd Decimal number is = %d\n", result);   
   }

    return 0;   
}
