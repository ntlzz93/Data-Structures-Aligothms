#ifndef stackarray_h
#define stackarray_h

const int MAX_SIZE = 100;
typedef string stackItemType;

class Stack{
private:
	stackItemType item[MAX_SIZE];
	int top;
public:
	Stack();
	bool isEmpty()const;
	void push(stackItemType value);
	void pop();
	stackItemType getTop();
};

Stack::Stack(){
	top = -1;
}
bool Stack::isEmpty()const{
	if (top == -1)
		return true;
	else
		return false;
}
void Stack::push(stackItemType value){
	item[++top] = value;
}

void Stack::pop(){
	if (top != -1){
		top = top - 1;
	}
}

stackItemType Stack::getTop(){
	return item[top];
}

#endif