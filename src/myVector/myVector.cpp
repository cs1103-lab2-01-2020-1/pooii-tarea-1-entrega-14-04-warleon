#include "myVector.h"

namespace utec{
//constructors
	template<class T>
	vector<T>::vector():arr{nullptr},size{},capa{}{}

	template<class T>
	vector<T>::vector(unsigned int tam):arr{nullptr},size{0},capa{tam}{
		arr=new T[capa];
	}
	
	template<class T>
	vector<T>::vector(const vector<T>& other):arr{nullptr},size{other.size},capa{other.capa}{
		arr= new T[capa];
		
		for(unsigned int i=0;i<size;i++)
			arr[i]=other.arr[i];
	}
//destructor
	template<class T>
	vector<T>::~vector(){
		delete [] arr;
		arr=nullptr;
		size=0;
		capa=0;
	}
	
//more functions 
	template<class T>
	void vector<T>::pushBack(T item){
		if(size>=capa)	changeCapa(capa*2);

		arr[size]=item;
		size++;
	}
	
	template<class T>
	void vector<T>::popBack(){
		arr[--size]=T();
	}

	template<class T>
	void vector<T>::insert(T item, unsigned int index){
		T* tempArr= new T[capa+1];
		unsigned int countA=0;

		for(unsigned int countB=0;countB<size+1;countB++)
			if(countA==index){
				tempArr[countB]=item;
			}
			else{
				tempArr[countB]=arr[countA];
				countA++;
			}

		delete [] arr;
		arr=tempArr;
	}
	
	template<class T>
	void vector<T>::erase(unsigned int index){
		T* tempArr= new T[capa];
		unsigned int countA=0;

		for(unsigned int countB=0;countB<size;countB++)
			if(countB==index){
				countB++;
				countA++;
			}
			else{
				tempArr[countA]=arr[countB];
				countA++;
			}

		delete [] arr;
		arr=tempArr;
	}

//private functions
	template<class T>
	void vector<T>::changeCapa(unsigned int newCapa){
		capa=newCapa;
		if(capa<size) size=capa;
		
		T* tempArr= new T[capa];

		for(unsigned int i=0;i<size;i++)
			tempArr[i]=arr[i];
		
		delete [] arr;
		arr=tempArr;
	}
//operator
	template<class T>
	vector<T> vector<T>::operator+(const vector<T>& extra){
		vector<T> vectorSum(capa+extra.capa);
		
		for(unsigned int i=0;i<capa;i++)
			vectorSum.pushBack(arr[i]);

		for(unsigned int i=0;i<extra.capa;i++)
			vectorSum.pushBack(extra.arr[i]);
		
		return vectorSum;	
	}

}
