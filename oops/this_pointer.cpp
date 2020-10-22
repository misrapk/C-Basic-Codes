//this pointer
#include<iostream>
using namespace std;

class pwr{
	double b;
	int e; 
	double val;
	public:
		pwr(double base, int exp);
		double get_pwr(){
			return val;
		}
};

pwr::pwr(double base, int exp){
	this->b = base;
	this->e = exp;
	this->val =1;
	if(exp == 0){
		return;
	}
	for(; exp>0; exp--) val *=b;
	
}

int main(){
	pwr p(2.0,10);
	cout<<p.get_pwr();
	
	return 0;
}

