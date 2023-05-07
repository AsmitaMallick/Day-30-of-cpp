#include<iostream>
using namespace std;
class baseclass{
	public:
		int varbase;
		void display(){
			cout<<"displaying base class variable: "<<varbase<<endl;
			
		}
	
};
class derivedclass : public baseclass{
		public:
		int varderived;
		void display(){
			cout<<"displaying derived class variable: "<<varderived<<endl;
			cout<<"displaying base class variable: "<<varbase<<endl;
			
		}
	
};
int main(){
	baseclass * baseclasspointer;
	baseclass obj1;
	derivedclass objderived;
	baseclasspointer = &objderived;//pointing base class pointer to derived class
	baseclasspointer->varbase = 44;
	//baseclasspointer->varderived = 22;//will throw an error
	baseclasspointer->display();
	return 0;
}
