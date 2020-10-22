// static member

#include<iostream>
using namespace std;

class c1{
	static int resource;
	public:
		int get_resources();
		void free_resources(){resource =0;}
};

int c1::resource;    //initial value is always 0 for static

int c1::get_resources(){
	if(resource) return 0;  //resource in use
	
	else{
		resource =1;
		return 1;  //resource allocated
	}
}



int main(){
	c1 ob1, ob2;
	if(ob1.get_resources()) cout<<"ob1 has resource \n";
	if(!ob2.get_resources()) cout<<"ob2 has no resource\n";
	
	ob1.free_resources();
	if(ob2.get_resources()) cout<<"ob2 has new use resource";
	
	return 0;
}
