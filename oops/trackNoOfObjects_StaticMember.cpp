//Static member to track number of objects
#include<iostream>
using namespace std;

class c1{
	public:
	static int count;
	c1(){count++;}
	~c1(){
		count--;
	}
	
	
};

int c1::count;
void f();
int main(void){
	c1 o1;
	cout<<"Objects : ";
	cout<<c1::count<<"\n";
	c1 o2;
	cout<<"Objects: "<<c1::count<<"\n";
	f();
	cout<<"Objects After calling f(): "<<c1::count<<"\n";
	
	
	return 0;
}
void f(){
	c1 temp;
	cout<<"Objects (in f()) : "<<c1::count<<"\n";
	
	//temp is destroyed when f returns becuase of destructor;
}
