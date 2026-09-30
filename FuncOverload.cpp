#include <iostream>
using namespace std;
int volume(int a){
    return a * a * a;
}
int volume(int a, int b, int c){
    return a * b * c;
}
int volume(int r, int h){
    return 3.14 * r * r*h; 
}
int input(int &a, int &b, int &c, int &r, int &h){
cout<<"enter the side of the cube"<<endl;
cin>>a;
cout<<"enter the length, breadth and height of the cuboid"<<endl;
cin>>a>>b>>c;
cout<<"enter the radius and height of the sphere"<<endl;
cin>>r>>h;
return a,b,c,r,h;
}
int main(){

    int a,b,c,r,h;
    input(a, b, c, r, h);
    cout<<"the volume of the cube is "<<volume(a)<<endl;
    cout<<"the volume of the cuboid is "<<volume(a,b,c)<<endl;
    cout<<"the volume of the sphere is "<<volume(r,h)<<endl;
    return 0;
}