//constructor overloading
#include<iostream>
using namespace std;

class construct{
	public:
		float area;
		
		construct(){
			area = 0;
		}
		
		construct(int a, int b)
		{
			area = a*b;
		}
		construct(int a, int b, int c){
			area = a*b*c;
		}
		void disp(){
			cout<<area<<endl;
		}
};
int main(){
	construct c;
	construct c1(2,4);
	construct c2(3,2,2);
	c.disp();
	c1.disp();
	c2.disp();
	return 0;
}
