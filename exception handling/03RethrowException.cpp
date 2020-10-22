#include<iostream>
using namespace std;

void xhandler(){
    try
    {
        throw "hello";
    }
    catch(const char *)
    {
        cout<<"Caught char inside fun!\n";
        throw;      //rethrow const
    }
    
}
int main(){
    cout<<"BEGIN\n";
    try
    {
        xhandler();
    }
    catch(const char *)
    {
        cout<<"Caught char * inside main!"; 
    }
    cout<<"END";

    return 0;
    
}