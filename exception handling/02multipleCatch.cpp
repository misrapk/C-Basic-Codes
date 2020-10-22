#include<iostream>
using namespace std;

void exHandler(int test){
    try
    {
        if(test) throw test;
        else throw "value is zero";
    }
    catch(int i)
    {
        cout<<"Caugh Excception : "<<i<<"\n";
    }
    catch(const char* str){
        cout<<"You caught a string! --> ";
        cout<<str<<'\n';
    }
    
}

int main(){
    cout<<"LEts Start \n";

    exHandler(1);
        exHandler(2);

    exHandler('s');
    exHandler(23);
    exHandler(0);
    exHandler(1);

cout<<"BBIE";
    return 0;

}