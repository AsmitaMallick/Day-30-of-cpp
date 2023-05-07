#include<iostream>
using namespace std;
class baseclass{
	public:
		int varbase ;
		void display(){
			cout<<"displaying base class variable: "<<varbase<<endl;
			
			}
	
};
class derivedclass : public baseclass{
		public:
		int varderived ;
		void display(){
			cout<<"displaying derived class variable: "<<varderived<<endl;
			cout<<"displaying base class variable: "<<varbase<<endl;
			
		}
	
};
int main(){
	baseclass * baseclasspointer;
	baseclass objbase;
	derivedclass objderived;
	baseclasspointer = &objderived;
	baseclasspointer->display();
	return 0;
}










