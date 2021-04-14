// Write a program to print out all Armstrong numbers between 1 and 
// 500. If sum of cubes of each digit of the number is equal to the 
// number itself, then the number is called an Armstrong number. For 
// example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).


#include<stdio.h>

int main(){
    int i=1,limit,r,sum,n;
    printf("Enter limit to print armstrong number =");
    scanf("%d", &limit);

    while (i<=limit)
    {
      n=i;
      sum=0;
    
      while (n!=0)
      {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
      } 
        
        if(i==sum)
        {
            printf("%d is a armstrong number\n", i);
        }
       i++;
       
     
    }
    return 0;
}

