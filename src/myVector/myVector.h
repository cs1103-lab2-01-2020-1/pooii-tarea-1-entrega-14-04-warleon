#pragma once

namespace utec{

	template<class T>
	class vector{
		T* arr=nullptr;
		unsigned int size;
		unsigned int capa;
	//private functions
		void changeCapa(unsigned int newCapa);
	
	public:
	//constructors
		vector();
		vector(unsigned int size);
		vector(const vector<T>& other);
	//destructor
		~vector();
	//more functions 
		void pushBack(T item);
		void popBack();
		void insert(T item, unsigned int index);
		void erase(unsigned int index);
	//operator
		vector<T> operator+(const vector<T>& extra);			

	};

}
