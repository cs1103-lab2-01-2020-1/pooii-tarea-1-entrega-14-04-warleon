#include <iostream>

template<typename T>
class Number {
	T Number_;
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
//	T operator^(const T& num);
//output
	template<typename U>
	friend std::ostream& operator<<(std::ostream& os,const Number<U>& num);
//cast
	operator T();
};
