#include<iostream>
using namespace std;

const int TABWIDTH = 8;

//display data at specified tab
template<class X> void tabOut(X data, int tab){
	for(; tab; tab--)
		  for(int i =0; i<TABWIDTH; i++) cout<<' ';
 		  
          cout<<data<<"\n";
}

int main(){
	tabOut("test", 0);
	tabOut(100,1);
	tabOut(23, 4);
	tabOut('X', 6);
	return 0;
}
