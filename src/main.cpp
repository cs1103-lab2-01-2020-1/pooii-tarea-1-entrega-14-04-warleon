#include"tipos.h"

int main(){
	Integer a=5;
	Number<float> b=3.14;
	utec::vector<int> c(a);

	c.pushBack(4);
	c.popBack();
	c+c;
	c.insert(3,3);
	c.erase(0);

	cout<<"a==5:	"<<(a==5)<<endl;
	cout<<"a!=5:	"<<(a!=5)<<endl;
	cout<<"a<=5:	"<<(a<=5)<<endl;
	cout<<"a>=5:	"<<(a>=5)<<endl;
	cout<<"a>5:	"<<(a>5)<<endl;
	cout<<"a<5:	"<<(a<5)<<endl;
	cout<<"a+5:	"<<(a+5)<<endl;
	cout<<"a*5:	"<<(a*5)<<endl;
	cout<<"a/5:	"<<(a/5)<<endl;
	cout<<"a^5:	"<<(a^5)<<endl;

	cout<<"b==3.14:	"<<(b==3.14)<<endl;
	cout<<"b!=3.14:	"<<(b!=3.14)<<endl;
	cout<<"b<=3.14:	"<<(b<=3.14)<<endl;
	cout<<"b>=3.14:	"<<(b>=3.14)<<endl;
	cout<<"b>3.14:	"<<(b>3.14)<<endl;
	cout<<"b<3.14:	"<<(b<3.14)<<endl;
	cout<<"b+3.14:	"<<(b+3.14)<<endl;
	cout<<"b*3.14:	"<<(b*3.14)<<endl;
	cout<<"b/3.14:	"<<(b/3.14)<<endl;
	cout<<"b^3.14:	"<<(b^3.14)<<endl;
 
	return 0;
}
