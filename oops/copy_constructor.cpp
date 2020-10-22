//copy constructor
#include<iostream>
using namespace std;

class Test{
	int x,y;
	public:
		Test(int x1, int y1){
			x=x1;
			y = y1;
		}
		//copy
		Test(const Test &t2){
			x = t2.x;
			y = t2.y;
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
};

int main(){
	Test t1(2,3);  //normal constructor
//	Test t2 = t1;  //copy constructor
	Test t2(t1);
	cout<<t1.getX();
	cout<<"\n"<<t2.getX();
	
	return 0;
}
