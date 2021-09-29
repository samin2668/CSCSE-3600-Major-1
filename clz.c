//Matt Robinson
//11166784

#include "major1.h"

void clz(int x)
{
   
    
    //int x;
    unsigned n = 0;
    const unsigned b = sizeof(x) * 8;
    /*
    printf("Enter one integer between 1 and 4,294,967,295: ");
    scanf("%d", &x);
    */
    for (int i = 1; i < b; i ++) 
        {
            if (x < 1 || x > 4294967295) 
            {
                break;
            }
            
            n++;
            x <<= 1;
        }
        
    printf("There are %d leading zero(es)!\n", n);
       
}
