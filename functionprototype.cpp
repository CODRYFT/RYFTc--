#include <iostream>
using namespace std;
/*we are defining a function of our own 
 sum is the function name*/
int sum(int a, int b){ 
    // sum(int , int)--> is acceptable
    // sum(int a, b)--> is not acceptable
int c=a+b;
return c;
// a and b are formal parameters and c is a local variable.
}


int main(){

    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum of the numbers is  "<<sum(num1,num2)<<endl;
    return 0;
    // num1 and num2 are actual parameters.
}