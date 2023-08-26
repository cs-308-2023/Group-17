#include <iostream>
#include "functions.h"
#include "gcd.cpp"

using namespace std;
int main(){
    int x = 56,y=98;
    cout<<"GCD of 56 and 98 = "<<gcd(x,y)<<endl;
    return 0;
}
