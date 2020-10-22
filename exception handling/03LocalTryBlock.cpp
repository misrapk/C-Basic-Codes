#include<iostream>
using namespace std;

// localize a try/catch to function
void superman(int power){
    try{
        if(power) throw power;
    }
    catch(int i){
        cout<<"Caught Exception #: "<<i<<"\n";
    }
}

int main(){
    cout<<"Start\n";

    superman(1);
    superman(2);
    superman(0);
    superman(3);
cout<<"END\n";

return 0;
}