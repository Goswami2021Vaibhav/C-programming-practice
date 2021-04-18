// Write a program to enter numbers till the user wants. At the end it 
// should display the count of positive, negative and zeros entered.

     // using while loop.

#include<stdio.h>

int main(){
    int limit,num,positive=0,negative=0,zero=0;
    char choice;
  
  printf("Enter limit = ");
  scanf("%d",&limit);
  
  printf("Enter the number = ");
  while (limit)
  {
      scanf("%d",&num);
      if(num > 0)
      {
          positive++;
      }
      else if(num < 0)
      {
          negative++;
      }
      else 
      {
          zero++;
      }
      limit--;
  }
  
  printf("Positive numbers : %d\n",positive);
  printf("Negative numbers : %d\n",negative);
  printf("Zero  : %d\n",zero);

    return 0;
}
  

// using for loop.

// Write a program to enter numbers till the user wants. At the end it 
// should display the count of positive, negative and zeros entered.



#include<stdio.h>

int main(){
    int limit,num,positive=0,negative=0,zero=0;
    char choice;
  
  printf("Enter limit = ");
  scanf("%d",&limit);
  
  printf("Enter the number = ");

  for(int i=1;i<=limit;i++)
  {
      scanf("%d",&num);
      if(num > 0)
      {
          positive++;
      }
      else if(num < 0)
      {
          negative++;
      }
      else 
      {
          zero++;
      }
    
  }
  
  printf("Positive numbers : %d\n",positive);
  printf("Negative numbers : %d\n",negative);
  printf("Zero  : %d\n",zero);

    return 0;
}
      

      // using do while loop.


      // Write a program to enter numbers till the user wants. At the end it 
// should display the count of positive, negative and zeros entered.



#include<stdio.h>

int main(){
    int  i=1,limit,num,positive=0,negative=0,zero=0;
    char choice;
  
  printf("Enter limit = ");
  scanf("%d",&limit);
  
  printf("Enter the number = ");
  
  do
  {
      scanf("%d",&num);
      if(num > 0)
      {
          positive++;
      }
      else if(num < 0)
      {
          negative++;
      }
      else 
      {
          zero++;
      }
    
       i++;
  }
      while(i<=limit);
      
  
  printf("Positive numbers : %d\n",positive);
  printf("Negative numbers : %d\n",negative);
  printf("Zero  : %d\n",zero);

 

    return 0;
}
