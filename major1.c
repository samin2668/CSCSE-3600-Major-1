#include "major1.h"

int main()
{
    unsigned long long num;
    int r;
    int menu;
    int check = 0;

//   do{
//        printf("Enter a number between 1 and 4294967295 inclusively\n");
//        scanf("%u", &num);
//    }while(num < 1 || num > 4294967295);

    do
    {
    	printf("Enter a command!\n");
    	printf("(1) Count Leading Zeroes!\n");
    	printf("(2) Endian Swap!\n");
    	printf("(3) Rotate-right!\n");
    	printf("(4) Parity!\n");
    	printf("(5) Exit!\n");
    
	scanf("%d", &menu);

	if (menu == 1)
	{
		//clz function
		do{
	        printf("Enter a number between 1 and 4294967295 inclusively\n");
	        scanf("%llu", &num);
		}while(num < 1 || num > 4294967295);
	  
		

		clz((long)num);
	}
	else if (menu == 2)
	{
		//endian function
		int swapped;
		do{
	        	printf("Enter a number between 1 and 4294967295 inclusively\n");
	        	scanf("%llu", &num);
		}while(num < 1 || num > 4294967295);
		
		swapped = endian ( num );
		
		printf("Endian swap of %lld gives %d\n",num,swapped);

	}
	else if (menu == 3)
	{
		do{
        		printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
        		scanf("%llu", &num);
		    }while(num < 1 || num > 4294967295);
		do{
        		printf("Enter number of positions to rotate-right the input (between 0 and 31, inclusively): ");
        		scanf("%d", &r);
		    }while(r < 0 || r > 31);
		
		printf("%llu rotated by %d position(s) gives: %u\n", num, r, rotate((long)num, r));
	}
	else if (menu == 4)
	{
		do{
	        printf("Enter a number between 1 and 4294967295 inclusively\n");
	        scanf("%llu", &num);
		}while(num < 1 || num > 4294967295);
	  	printf("%d\n", parity((long)num));
	}
	else if (menu == 5)
	{
		printf("Goodbye!\n");
		check = 999;
		break;
	}
	else 
	{
		printf("Error: Invalid option. Please try again!\n");
	}
    
    }while (check < 10);

   
    //printf("%i\n",parity(num));
    return 0;
}
