//calling of constructor and destructor
#include<iostream>
using namespace std;

class temp{
	public:
	int who;
	temp(int i);
	~temp(); 
} globalob1(1), globalob2(2);

temp::temp(int i){
	cout<<"INITIALIZING CONSTRUCTOR>>>>>>>"<< i<<"\n";
	who =i;
}
temp::~temp(){
	cout<<"DESTRUCTING <<<<<<<<<<<"<<who<<"\n";
}

int main(){
	temp localob(3);
	
	cout<<"LOCAL OBJECT CALLS..................\n";
	
	temp localob2(4);
	return 0;
}
