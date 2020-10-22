/*catch(...){
    //process all exception
}

TODO: this should be used as default to catch all exception 
*/

#include<iostream>
using namespace std;


void xhandler(int test){
    try
    {
        if(test==0) throw test;   //throw int
        if(test ==1) throw 'a'; //throw char
        if(test==2) throw 12.22; //throw double
    }
    catch(...)  //TODO: all catch will be caught
    {
        cout<<"Caught one" <<"\n";
    }
    
}

int main(){
    cout<<"BEGIN\n";
    xhandler(0);
    xhandler(1);
    xhandler(2);
    xhandler(3);

    return 0;
}