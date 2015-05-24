//#include"List.h"
//
//template<class Type>
//List<Type>::List(){
//	n = 0;
//}
//
//template<class Type>
//Type List<Type>::getAr(){
//	return ar;
//}
//
//template<class Type>
//void List<Type>::insert(int pos, Type val){
//	for (int i = n; i >= pos; i--){
//		ar[i] = ar[i - 1];
//	}
//	ar[pos] = val;
//	this->n = this->n + 1;
//}
//
//template<class Type>
//void List<Type>::initialization_arrays(){
//	cout << "Enter n "; cin >> n;
//	for (int i = 0; i < n; i++){
//		int value;
//		cout << "array[" << i << "] = ";
//		cin >> value;
//		ar[i] = value;
//	}
//}
//
//template<class Type>
//void List<Type>::retreive(int pos, Type & data){
//	if (pos >= 0 && pos <= n){
//		for (int i = pos; i < pos + 1; i++){
//			data = ar[i - 1];
//		}
//	}
//}
//
//template<class Type>
//void List<Type>::print(){
//	for (int i = 0; i < n; i++){
//		cout << "arrays[" << i << "] = " << ar[i] << endl;
//	}
//}
//
////template<class Type>
////void List<Type>::defaultList(){
////	cout << "----------------Menu----------" << endl;
////	cout << "1. Initilization array " << endl;
////	cout << "2. Insert element into array " << endl;
////	cout << "3. Retreive element into array " << endl;
////	cout << "4. Print Array " << endl;
////	cout << "Else. Close Program " << endl;
////	int val;
////	cout << "Enter number need implement "; cin >> val;
////	switch (val){
////	case 1:
////		// function initilization array
////		initialization_arrays();
////		defaultList();
////		break;
////	case 2:
////		// insert element into array
////		int _pos, _value;
////		cout << "Insert element from position to value " << endl;
////		cout << "position: "; cin >> _pos;
////		cout << "value: "; cin >> _value;
////		insert(_pos, _value);
////		defaultList();
////		break;
////	case 3:
////		//retreive element to array
////		int data;
////		int pos;
////		cout << "postion: "; cin >> pos;
////		retreive(pos, data);
////		cout << "data = " << data << endl;
////		defaultList();
////	case 4:
////		// print
////		print();
////		defaultList();
////	default:
////		char str;
////		cin.get(str);
////		cout << "Exit" << endl;
////	}
////}