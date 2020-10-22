//pure virtual destructor
#include<iostream>
using namespace std;

class Test{
	public:
		virtual ~Test() = 0;  //pure virtual
		
};
Test :: ~Test(){
	
}
int main(){
	Test p;
	Test* t1 = new Test;
	return 0;
}
