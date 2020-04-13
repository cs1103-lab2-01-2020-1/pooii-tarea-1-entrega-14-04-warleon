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

	template<typename U>
	T operator+(const U& num);

	template<typename U>
	T operator-(const U& num);
	
	template<typename U>
	T operator*(const U& num);
	
	template<typename U>
	void operator+=(const U& num);
	
	template<typename U>
	void operator-=(const U& num);
	
	template<typename U>
	void operator*=(const U& num);
	
	template<typename U>
	T operator/(const U& num);
//logical operators
	
	template<typename U>
	bool operator==(const U& num);
	
	template<typename U>
	bool operator!=(const U& num);
	
	template<typename U>
	bool operator<=(const U& num);
	
	template<typename U>
	bool operator>=(const U& num);
	
	template<typename U>
	bool operator<(const U& num);
	
	template<typename U>
	bool operator>(const U& num);
//extra operators
//	T operator^(const T& num);
//output
	template<typename U>
	friend std::ostream& operator<<(std::ostream& os,const Number<U>& num);
};
