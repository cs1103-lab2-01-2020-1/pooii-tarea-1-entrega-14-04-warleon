#include <iostream>
#include"Number.cpp"

using namespace std;

int main(){
	Number<int> a=4;
	Number<float> b=3.14;
	Number<char> c=69;
	
	cout<<(a==4)<<endl;
	cout<<(a!=4)<<endl;
	cout<<(a<=4)<<endl;
	cout<<(a>=4)<<endl;
	cout<<(a<4)<<endl;
	cout<<(a>4)<<endl;
	cout<<(a+4)<<endl;
	cout<<(a-4)<<endl;
	cout<<(a*4)<<endl;
	cout<<a<<endl<<b<<endl<<c<<endl;

	return 0;
}

