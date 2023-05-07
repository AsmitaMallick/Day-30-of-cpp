#include<iostream>
#include<cstring>
using namespace std;
class cwh{
	protected:
		string title;
		float rating;
	public:
		cwh(string s, float r){
		 title = s;
		 rating = r;	
		}
		virtual void display(){
		}
};
class cwhvideo: public cwh{
	int videolength;
	public:
		cwhvideo(string s, float r, float vl):cwh(s,r){
			videolength = vl;
		}
		void display(){
			cout<<"this is an amazing video"<<title<<endl;
			cout<<"ratings: "<<rating<< " out of 5 stars"<<endl;
			cout<<"length of the video is: "<<videolength<<" minutes"<<endl;
		}
};
class cwhtext: public cwh{
	int words;
	public:
		cwhtext(string s, float r, int wc):cwh(s,r){
			words = wc;
		}
		void display(){
			
			cout<<"this is an amazing text tutorial with title "<<title<<endl;
			cout<<"ratings of this text tutorial: "<<rating<< " out of 5 stars"<<endl;
			cout<<"number of words in the video tutorial is: "<<words<<" words"<<endl;
		
		}
};
int main(){
	string title;
	float rating,vlen;
	int words;
	//cwh video
	title = "cpp tutorial";
	vlen = 4.56;
	rating = 4.99;
	cwhvideo cppvideo(title, rating, vlen);
	cppvideo.display();
	//cwh video text
	title = "cpp tutorial text";
	words = 4.56;
	rating = 4.16;
	cwhtext cpptext(title, rating, words);
	cpptext.display();
	//calling by using pointers
	
	cwh*tuts[2];
	tuts[0] = &cppvideo;
	tuts[1] = &cpptext;
	
	tuts[0]->display();
	tuts[1]->display();
		
	return 0;
}












