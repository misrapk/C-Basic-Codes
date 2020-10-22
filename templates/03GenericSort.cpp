#include<iostream>
using namespace std;

//program for bubble sort using template
template <class X> void bubble(X *item, int count){
    register int a, b;
    X t;
    for(a=1; a<count; a++){
        for(b=count-1; b>=a; b--){
            if(item[b-1] > item[b]){
                //exchange
                t = item[b-1];
                item[b-1] = item[b];
                item[b] = t;
            }
        }
    }
}

int main(){
    int iArray[8] = {3,5,11,3,4,6,3,1};
    double fArray[8] = {3.2, 5.5, 1.0, 56, 33, 0.5};

    cout<<"Integer --> ";
    for (int  i = 0; i < 7; i++)
    {
        cout<<iArray[i]<<" ";
    }
    cout<<endl;
    cout<<"Double --> ";
    for (int i = 0; i < 7; i++)
    {
        cout<<fArray[i] <<" ";
    }

    bubble(iArray, 7);
    bubble(fArray, 7);
    
    cout<<endl;
    cout<<"Sorted Integer --> ";
    for (int  i = 0; i < 8; i++)
    {
        cout<<iArray[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted Double --> ";
    for (int i = 0; i < 8; i++)
    {
        cout<<fArray[i] <<" ";
    }

    return 0;
}