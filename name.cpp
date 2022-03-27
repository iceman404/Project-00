#include<iostream>
using namespace std;

int main(){
	enum color{red=0xffff, yellow, green, blue, violet};
	cout << red <<", "<< yellow <<", "<<green<<", "<<blue<<", "<<violet<<endl;
	cout<<"This is another commit\n";
	return 0;
}
