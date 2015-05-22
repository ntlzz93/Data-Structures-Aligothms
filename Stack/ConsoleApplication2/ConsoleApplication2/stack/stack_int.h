#ifndef StackIntArrayInt_h
#define StackIntArrayInt_h


const int MAX_SIZE_INT = 100;
typedef float Type;

class StackInt{
private:
	Type item[MAX_SIZE_INT];
	int top;
public:
	StackInt();
	bool isEmpty()const;
	void push(Type value);
	void pop();
	Type getTop();
};

StackInt::StackInt(){
	top = -1;
}
bool StackInt::isEmpty()const{
	if (top == -1)
		return true;
	else
		return false;
}
void StackInt::push(Type value){
	item[++top] = value;
}

void StackInt::pop(){
	if (top != -1){
		top = top - 1;
	}
}

Type StackInt::getTop(){
	return item[top];
}

#endif