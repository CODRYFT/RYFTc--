#include <iostream>
using namespace std;
struct gamers
{
    string gamingid;
    int exp;
    float points;
    
};
int main (){
struct gamers mandar;
struct gamers dhruv;
struct gamers shantanu;
mandar.gamingid = "no8";
mandar.exp=100;
mandar.points=99;
cout<<"the user id is "<<mandar.gamingid<<endl;
cout<<"the user exp is "<<mandar.exp<<endl;
cout<<"the user points are "<<mandar.points<<endl;

gamers dhruv={"n08",0,0};
cout<<"the user id is "<<dhruv.gamingid<<endl;
cout<<"the user points are "<<dhruv.points<<endl;
cout<<"the exp is "<<dhruv.exp<<endl;
return 0;


}