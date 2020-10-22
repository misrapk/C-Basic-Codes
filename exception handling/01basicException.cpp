#include<iostream>
using namespace std;

int main(){
    cout<<"Start\n";

    try{
        cout<<"I'm Try Block\n";
        throw 100;
        cout<<"oops you will not get me!";
    }
    catch(float i ){
        cout<<"Exception is caught by Catch ";
        cout<<i<<"\n";

    }
    cout<<"End";

    return 0;
}