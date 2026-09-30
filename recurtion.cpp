# include <iostream>
using namespace std;
int fact(int a){

    if(a==1){
return 1;}
return a*fact(a-1);
}
int main(){
    int a;
cout<<"enter the number for which u wan tthe factorial of"<<endl;
cin>>a;
cout<<"the factorial of "<<a<< " is "<<fact(a)<<endl;
return 0;

}