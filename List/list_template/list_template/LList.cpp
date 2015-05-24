
#include"LList.h"

template<class Type>
LList<Type>::LList(){
	n = 0;
}

template<class Type>
Type LList<Type>::getAr(){
	return ar;
}

template<class Type>
void LList<Type>::insert(int pos, Type val){
	for (int i = n; i >= pos; i--){
		ar[i] = ar[i - 1];
	}
	ar[pos] = val;
	this->n = this->n + 1;
}

template<class Type>
void LList<Type>::initialization_arrays(){
	cout << "Enter n "; cin >> n;
	for (int i = 0; i < n; i++){
		int value;
		cout << "array[" << i << "] = ";
		cin >> value;
		ar[i] = value;
	}
}

template<class Type>
void LList<Type>::retreive(int pos, Type & data){
	if (pos >= 0 && pos <= n){
		for (int i = pos; i < pos + 1; i++){
			data = ar[i - 1];
		}
	}
}

template<class Type>
void LList<Type>::print(){
	for (int i = 0; i < n; i++){
		cout << "arrays[" << i << "] = " << ar[i] << endl;
	}
}



