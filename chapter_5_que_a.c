// Write a program to calculate overtime pay of 10 employees. 
// Overtime is paid at the rate of Rs. 12.00 per hour for every hour 
// worked above 40 hours. Assume that employees do not work for 
// fractional part of an hour.
#include<stdio.h>

int main(){
    int over_time,working_hours,count=1;
    float overtime_pay;
    while(count<=10)
    {
        printf("Enter the worked hours of employee no %d =", count);

        scanf("%d",&working_hours);

        if(working_hours>40)

        {
            over_time=working_hours-40;

            overtime_pay =over_time*12;

            printf("The over time pay of the employee %d is =%.2f\n", count,overtime_pay);
        }

        else

        {
            printf("You have to do work more than 40 hours to get over time pay.\n");
        }

        count++;
    }    
    return 0;

   
}
