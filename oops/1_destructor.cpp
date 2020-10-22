//destructor
#include<iostream>
using namespace std;
class base{
	public:
		base(){
			cout<<"Constructor Base\n";
		}
		~base(){
			cout<<"Destructor Base\n";
		}
};
class derieved: public base{
	public:
		derieved(){
			cout<<"Constructor Derieved\n";
		}
		~derieved(){
			cout<<"Destructor Derieved \n";
		}
};
int main(){
//	derieved d;
	//or
	derieved *d = new derieved();
	base *b = d;
	delete b;
	getchar();
	return 0;
}
