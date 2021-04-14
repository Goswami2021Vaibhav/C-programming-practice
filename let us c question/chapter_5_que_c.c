// Two numbers are entered through the keyboard. Write a program 
// to find the value of one number raised to the power of another.

#include<stdio.h>
#include<math.h>
int main(){
    int a, n,power_value;
    
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of n=");
    scanf("%d",&n);

   power_value=pow(a,n);

   printf("The value of %d raised to power %d is =%d\n",a,n,power_value);


    return 0;
}
