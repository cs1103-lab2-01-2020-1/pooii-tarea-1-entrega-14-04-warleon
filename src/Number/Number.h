#include <iostream>

template<typename T>
class Number {
	T Number_;
/*private functions
	int decimalToFraction(double n,int code);

	Number<T> recNroot(unsigned int N,const T& base, Number<T> lBound,Number<T> uBound){
		Number<T> mid=(lBound.Number_+uBound.Number_)/2;
	
		if((uBound.Number_-lBound.Number_)/2<=0.01) return mid;
		
		T mBound= mid.intPower(N);
		
		if(mBound<base) return recNroot(N,base,mBound,uBound);
		else recNroot(N,base,lBound,mBound);
	}
	
	T intPower(int exp);
	
	Number<T> calcUpperBound(int N,const T& base);
*/
public:
//Constructors
	Number();
	Number(const T& num);
	Number(const Number<T>& num);
//operators
	void operator=(const T& num);

	void operator++();
	void operator--();

	T operator+(const T& num);

	T operator-(const T& num);
	
	T operator*(const T& num);
	
	void operator+=(const T& num);
	
	void operator-=(const T& num);
	
	void operator*=(const T& num);
	
	T operator/(const T& num);
//logical operators
	
	bool operator==(const T& num);
	
	bool operator!=(const T& num);
	
	bool operator<=(const T& num);
	
	bool operator>=(const T& num);
	
	bool operator<(const T& num);
	
	bool operator>(const T& num);
//extra operators
	Number<T> operator^(int exp);
//output
	template<typename U>
	friend std::ostream& operator<<(std::ostream& os,const Number<U>& num);
//cast
	operator T();
};
