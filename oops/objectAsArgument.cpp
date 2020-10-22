// pass object as argument
#include<iostream>
using namespace std;

class test{
	int var;
	public:
	
		
		test(int i){
			var = i;
			   cout<<"CONSTRUCTING "<<var<<"\n";
		}
		~test(){
			cout<<"Destructing "<<var<<"\n";
		}
		int get(){
			return var;
		}
};


void f(test t);

int main(){
	test ob1(10);
	cout<<"In LOCAL MAIN: "<< ob1.get()<<"\n";
	
	f(ob1);
	cout<<"THis is main()\n";
	return 0;
	
}

void f(test t){
	cout<<"THis is function test : "<<t.get();
	cout<<endl;
}
