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

/*template<typename T>
T operator^(const T& num){
	if(num%1!=0) return (T)0;
	if(num==0) return (T)1;
	T y;
	if(num>0){
		if(num%2==0){
			y=(*this)^(num/2);
		   return y*y;	
		}
		else{
			y=(*this)^(num-1);
			return (*this)*y;
		}
	}
	else{
		y=(*this)^(-num);
		return 1/y;
	}
}
*/

template<typename T>
Number<T>::operator T(){return Number_;}
