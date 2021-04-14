// If a five-digit number is input through the keyboard, write a 
// program to reverse the number.


#include<stdio.h>

int main(){
    
    int n,r,result=0;
    printf("Enter the number=");
    scanf("%d", &n);

    while(n>0)
    {
       r=n%10;
       result=result*10+r;
       n=n/10;

    }       
       printf("The reverse of the number is= %d\n", result);


    return 0;
}
