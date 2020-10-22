//static member function
/* points:
     	  1. no "this" pointer
     	  2. There can't be static and nonstatic version of same function
     	  3. They may not be "Virtual"
     	  4. Cant be declared "const" or "volatile"
     	  
     	  */

#include<iostream>
using namespace std;

class c1{
	static int resource;
	public:
		static int get_resources();
		void free_resources(){resource =0;}
};
int c1::get_resources(){
	if(resource) return 0;
	else{
		resource =1;
		return 1;
	}
}
int c1::resource;


int main(){
	c1 ob1, ob2;
	//static member function can be called indepndently of objects
	if(c1::get_resources()) cout<<"ob1 has resource\n";
	if(!c1::get_resources()) cout<<"ob2 has no resource\n";
	
	ob1.free_resources();
	if(ob2.get_resources()) cout<<"ob2 has now resource.";
	return 0;
}
