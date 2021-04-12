// Write a program to print all the ASCII values and their equivalent 
// characters using a while loop. The ASCII values vary from 0 to 255.


#include <stdio.h>

int main(){
    char ASCII;
    int i=0;

  while(i<=255)
  {
        printf("ASCII value of %c=%d\n", i,i);
        i++;  
  }


   return 0;
   }
