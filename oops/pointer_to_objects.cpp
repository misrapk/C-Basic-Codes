// pointer to objects

#include<iostream>
using namespace std;

class test{
	int i;
	public:
		test(){
			i=0;
		}
		test(int n){
			i=n;
		}
		int get_i(){
			return i;
		}
};

int main(){
	
	test t1[4] = {1,2,3,4};
	test *ptr;
	ptr = t1;      // take the first element of array
	
	for(int i =0; i<4; i++){
		cout<<ptr->get_i()<<" ";
		ptr++;
	}
	return 0;
}
