#include <iostream>
#include "functions.h"
using namespace std;
int factorial(int n){
    if (n<0){
        cout<<"Invalid number. Please re-enter a number greater than 0!");
        cout<<endl;
    }
    else if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
