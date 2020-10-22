//returning objects
#include<iostream>
using namespace std;

class test{
	int i;
	public:
		void set_i(int n){
			i=n;
		}
		int get_i(){
			return i;
		}
};

test f();      //return object of type test class;

int main(){
	test t1, t2;
	t2.set_i(12);
	t1=f();
	cout<<t1.get_i()<<endl;
	
	cout<<t2.get_i()<<endl;
	return 0;
}

test f(){
	test t;
	cout<<"IN FUNCTION\n";
	
	t.set_i(111);
	return t;
}





