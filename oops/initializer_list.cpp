//initializer tes
// it is used to initialize the data members of a class
#include<iostream>
using namespace std;

class Test{
	int x,y;
	public:
		Test(int i =0, int j=0): x(i),y(j){}
		/*this is initailizer list a short form of
		Test(int i =0, int j =0){
				 x=i;
				 y=j;
			}
			*/
		int getX() const{return x;}
		int getY() const{return y;}
		
};
//For Initialization of reference data members
class Ini{
	int &t;   //reference
	public:
		Ini(int &t): t(t){}
		int get(){return t;
		}
};
int main(){
	Test t1(19,12);
	cout<<t1.getX();
	cout<<"\n"<<t1.getY();
}
