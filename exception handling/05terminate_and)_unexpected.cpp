//TODO: Teminate 
/* Terminate is called whenever the exception handling fails to find the matching catch. 
Also when a program rethrow an expetions whenver no exception is actually trhown
*/
//TODO:  Unexpected
/*
Whenever fun attempts to throw an exception that is not allowed by its throw list.

Bydefault --> unexpected() calls terminate();
*/
//TODO: OUr own terminate() handler

#include<iostream>
#include<exception>
#include<cstdlib>
using namespace std;

void myThandler(){
    cout<<"Inside new terminate handler";
    abort();
}

int main(){
    //set new terminate
    set_terminate(myThandler);  //to change terminate handler

    try
    {
        cout<<"inside try\n";
        throw 100;
    }
    catch(double i)  //won't catch int
    {
        // ....
    }
    return 0;
    
}