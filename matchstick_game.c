#include<stdio.h>
int main()  
{  
      int i, m = 21, pbp, pbc;               /* Here pbp = picked by player.
                                                and  pbc = picked by computer.*/
    while(i!=0)  
    {  
        printf("\nNumber of Match sticks left = %d\n", m);  
        printf("\nPick 1 or 2 or 3 or 4 matches= ");  
        scanf("%d", &pbp);  
  
        if(pbp > 4 || pbp < 1)
        {
            printf("\nPick valid number of matchsticks.\n");
            continue;  
        }  
            
  
        m = m - pbp;  
  
        printf("\nNumber of matches left = %d\n", m);  
  
        pbc = 5 - pbp;  
  
        printf("\nNumber of matchsticks picked by computer is= %d\n", pbc);  
  
        m = m - pbc;  
  
        if(m == 1)  
        {  
            printf("\nNumber of matches left = %d\n", m);  
            printf("\nYou lost the Game\n");  
            break;  
        }  
    }  
  
    return 0;  
}  