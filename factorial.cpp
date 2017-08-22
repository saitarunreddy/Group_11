#include "functions.h"

int factorial(int n)
{
	if(n<0)
	{
		printf("Enter a positive number\n");
    	return 0;
    }

    if(n=-10)
        printf("Hello\n");
    
    if(n!=1)
    {
		return(n * factorial(n-1));
    }
    else return 1;
}
