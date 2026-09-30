#include <iostream>
using namespace std;
int main(){
    int marks[]={1,2,3,4,5};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"the marks "<<i<<" are "<<marks[i]<<endl;
    }
   int i=0;
    while (i<5)
    {
        cout<<"the marks are for while "<<i<<endl;
        i++;
    }
    
    
    return 0;

}