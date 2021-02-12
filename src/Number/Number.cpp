#include "Number.h"

template<typename T>
Number<T>::Number():Number_{}{}

template<typename T>
Number<T>::Number(const T& num):Number_{num}{}

template<typename T>
Number<T>::Number(const Number<T>& num):Number_{num.Number_}{}

template<typename T>
void Number<T>::operator=(const T& num){Number_=num;}

template<typename T>
void Number<T>::operator++(){Number_++;}

template<typename T>
void Number<T>::operator--(){Number_--;}

template<typename T>
T Number<T>::operator+(const T& num){
	T res(Number_+num);
	return res;
}

template<typename T>
T Number<T>::operator-(const T& num){
	T res(Number_-num);
	return res;
}

template<typename T>
T Number<T>::operator*(const T& num){
	T res(Number_*num);
	return res;
}

template<typename T>
void Number<T>::operator+=(const T& num){Number_+=num;}

template<typename T>
void Number<T>::operator-=(const T& num){Number_-=num;}

template<typename T>
void Number<T>::operator*=(const T& num){Number_*=num;}

template<typename T>
T Number<T>::operator/(const T& num){
	T res(Number_/num);
	return res;
}

template<typename T>
bool Number<T>::operator==(const T& num){return Number_==num;}

template<typename T>
bool Number<T>::operator!=(const T& num){return Number_!=num;}

template<typename T>
bool Number<T>::operator<=(const T& num){return Number_<=num;}

template<typename T>
bool Number<T>::operator>=(const T& num){return Number_>=num;}

template<typename T>
bool Number<T>::operator<(const T& num){return Number_<num;}

template<typename T>
bool Number<T>::operator>(const T& num){return Number_>num;}

template<typename U>
std::ostream& operator<<(std::ostream& os,const Number<U>& num){
	os<<num.Number_;
	return os;
}
/*
template<typename T>
T Number<T>::intPower(int exp){
	if(exp==0) return T(1);
	T y;
	if(exp>0){
		if(exp%2==0){
			y=(*this).intPower(exp/2);
		   return y*y;	
		}
		else{
			y=(*this).intPower(exp-1);
			return (*this)*y;
		}
	}
	else{
		y=(*this).intPower(-exp);
		return 1/y;
	}
}
*/

template<typename T>
Number<T>::operator T(){return Number_;}

/*private functions
template<typename T>
int Number<T>::decimalToFraction(double n,int code){
	int count=0;
	while(n-int(n)!=0){
		n*=10;
		count++;
	}
	
	if(code==0) return n;
	else return count;
}


template<typename T>
Number<T> Number<T>::recNroot(int N,const T& base,const Number<T>&  lBound,const Number<T>& uBound){
	Number<T> mid=(lBound.Number_+uBound.Number_)/2;

	if((uBound.Number_-lBound.Number_)/2<=0.0001) return mid;
	
	T mBound= mid.intpower(N);
	
	if(mBound<base) return recNroot(N,base,mBound,uBound);
	else recNroot(N,base,lBound,mBound);
}

template<typename T>
Number<T> Number<T>::calcUpperBound(int N,const T& base){
		Number<T> uBound(2);

		while(uBound.intPower(N)<base)
			uBound.operator++();
		
		return uBound;
	}

template<typename T>
Number<T> Number<T>::operator^(double exp){
	int numerator= decimalToFraction(exp,0);
	int denominator= decimalToFraction(exp,1);

	T base=(*this).intPower(numerator);
	return recNroot(denominator,base,Number<T>(1),calcUpperBound(denominator,base));
}
*/

template<typename T>
Number<T> Number<T>::operator^(int exp){
	Number<T> res((*this));
	
	for(int i=0;i<exp;i++)
		res.operator*=(Number_);
	
	return res;
}
