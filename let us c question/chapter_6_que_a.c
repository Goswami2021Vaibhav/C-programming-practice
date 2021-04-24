// Write a program to print all prime numbers from 1 to 300. (Hint: 
// Use nested loops, break and continue)

#include<stdio.h >  
#include<math.h>  
  
int main()  
{  
    int limit,num, count, i, prime; 

    printf("Enter the limit = ");
    scanf("%d", &limit);

    printf("Prime Numbers from 1 To 300 are\n");  
  
    for(num = 1; num <= limit; num++)  
    {  
        if(num == 1)  
        {  
            printf("Number 1 is neither prime nor composite\n");  
            continue;  
        }  
  
        count = sqrt(num);  
        prime = 1;  
        for(i = 2; i <= count; i++)  
        {  
            if(num % i == 0)  
            {  
                prime = 0;  
                break;  
            }  
        }  
  
        if(prime)  
        {  
            printf("%d\t", num);  
        }  
    }  
  
    return 0;  
}  
