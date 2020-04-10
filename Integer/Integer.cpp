#include "Integer.h"

Integer::Integer(){Integer(0);}
Integer::Integer(int num){(this->mynum_)=num;}
Integer::Integer(const Integer& num){Integer(num.mynum_);}
Integer::~Integer(){delete this;}

Integer Integer::operator+(const Integer& a){
	Integer res(a.mynum_ + this->mynum_);
	return res;
}

void Integer::operator+=(const Integer& adder){(this->mynum_)+=(adder.mynum_);}

void Integer::operator=(const Integer& num){(this->mynum_)=(num.mynum_);}
	
Integer Integer::operator-(const Integer& a){
	Integer res(a.mynum_ - this->mynum_);
	return res;
}

void Integer::operator-=(const Integer& sus){(this->mynum_)-=(sus.mynum_);}


Integer Integer::operator*(const Integer& a){
	Integer res(a.mynum_ * this->mynum_);
	return res;
}

void Integer::operator*=(const Integer& mul){(this->mynum_)*=(mul.mynum_);}

Integer Integer::operator/(const Integer& a){
	Integer res(a.mynum_ / this->mynum_);
	return res;
}

//stand by 
Integer Integer::operator^(const Integer& b){
	if(b==Integer(0)) return Integer(1);
	Integer y();

	if(b>Integer(0)){
		if(b.isMultOf(Integer(2))){
		y=(*this)^(b/(Integer(2)));
		return y*y;
		}
		else{
		y=(*this)^(b-(Integer(1)));
		return (*this)*(y);
		}
	}
	if(b<Integer(0)){
		y=(*this)^(-b);
		return Integer(1)/y;
	}
}

bool Integer::isMultOf(const Integer& a){return (this->mynum_)%(a.mynum_) == 0;}

Integer Integer::operator-(){return -(this->mynum_);}

bool Integer::operator>(const Integer& a){return this->mynum_>a.mynum_;}
bool Integer::operator<(const Integer& a){return this->mynum_<a.mynum_;}
bool Integer::operator<=(const Integer& a){return this->mynum_<=a.mynum_;}
bool Integer::operator>=(const Integer& a){return this->mynum_>=a.mynum_;}
bool Integer::operator!=(const Integer& a){return this->mynum_!=a.mynum_;}
bool Integer::operator==(const Integer& a){return this->mynum_==a.mynum_;}
