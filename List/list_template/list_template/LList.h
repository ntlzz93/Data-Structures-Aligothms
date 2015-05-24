#ifndef tListt_H
#define tListt_H

template <class Type>
class LList{
private:
	Type ar[100];
	int n;
public:
	LList();
	Type getAr();
	void insert(int pos, Type val);
	void initialization_arrays();
	void retreive(int pos, Type & data);
	void print();
	/*void defaultList();*/
};

#endif