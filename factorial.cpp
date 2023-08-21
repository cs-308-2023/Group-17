#include <iostream>
#include "functions.h"

int factorial(int n){
    if (n<0){
        printf("Invalid number. Please re-enter a number greater than 0!");
        printf("\n");
        return -1;
    }	
    else if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
