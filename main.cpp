#include <iostream>
#include "functions.h"
#include "gcd.cpp"
using namespace std;
int main(){
    int x = 56, y=98;
    cout<<"GCD of x and y is "<<gcd(x,y)<<endl;
    return 0;
}
