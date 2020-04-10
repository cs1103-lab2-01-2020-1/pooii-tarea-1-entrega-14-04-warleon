#pragma once


class Integer{
	int mynum_;
public:
//constructores
	Integer();
	Integer(int num);
	Integer(const Integer& num);
//destructor
	~Integer();	
//operadores basicos
	void operator=(const Integer& num);
	void operator+=(const Integer& adder);
	Integer operator+(const Integer& a);
	Integer operator-(const Integer& a);
	Integer operator-();
	void operator-=(const Integer& sus);
	Integer operator*(const Integer& a);
	void operator*=(const Integer& mul);
	Integer operator/(const Integer& a);
//potenciacion
	Integer operator^(const Integer& b);
//comparaciones logicas
	bool operator>(const Integer& a);
	bool operator<(const Integer& a);
	bool operator<=(const Integer& a);
	bool operator>=(const Integer& a);
	bool operator!=(const Integer& a);
	bool operator==(const Integer& a);
//my functions
	bool isMultOf(const Integer& a);
};
