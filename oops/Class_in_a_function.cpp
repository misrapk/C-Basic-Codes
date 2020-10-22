//class in a function
#include<iostream>
using namespace std;

void f();
int main(){
	f();
	
	return 0;
}

void f(){
	class test{
		int i;
		public:
			void put(int n){
				i=n;
			}
			int get(){return i;
			}
		
			
	} obj;
	
	
	obj.put(10);
	cout<<obj.get();
	
}
