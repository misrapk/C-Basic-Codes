//Implementation of Exception handling
#include<iostream>
using namespace std;

void divide(double a, double b){
    try
    {
        if(!b) throw b;
        cout<<"RESULT: "<<a/b<<endl;
    }
    catch(double b)
    {
        cout<<"You Entereed 0!"<<endl;
    }
    
}

int main(){
    double i, j;
    i = 2; 
    j = 0;

    divide(i , j);

    return 0;    
}