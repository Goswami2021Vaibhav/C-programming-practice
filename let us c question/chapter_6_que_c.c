// Write a program to add first seven terms of the following series 

//   1/1! + 2/2! + 3/3! .........

// using a for loop:


#include<stdio.h>

int main(){
    int  num=1,limit,i;
    float sum=0,factorial;

    printf("Enter the limit = ");
    scanf("%d", &limit);
    
    for(num=1;num<=limit;num++)
   {
        factorial= 1;

        for(i=1; i<=num; i++)
        {

            factorial =factorial*i;
        }
        
            sum = sum + num/factorial;
    
   }  
            printf("The value of the series is = %f", sum);

    return 0;
  }


