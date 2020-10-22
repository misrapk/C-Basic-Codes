//template Example Function

#include<iostream>
using namespace std;

//template function
template <class X> void swapargs(X &a, X &b){
    X temp;

    temp = a;
    a = b;
    b = temp;
}


int main(){
    int i = 20, j=40;
    double x = 23.4 , y = 12.2;
    char a = 'x', b = 'z';

    cout<<"Original i, j: "<<i<<" "<<j<<endl;
    cout<<"Original x, y: "<<x<<" "<<y<<endl;
    cout<<"Original a, b: "<<a<<" "<<b<<endl;

    swapargs(i,j);
    swapargs(x,y);
    swapargs(a,b);
    cout<<"Swaped i, j: "<<i<<" "<<j<<endl;
    cout<<"Swaped x, y: "<<x<<" "<<y<<endl;
    cout<<"Swaped a, b: "<<a<<" "<<b<<endl;


    return 0;
}