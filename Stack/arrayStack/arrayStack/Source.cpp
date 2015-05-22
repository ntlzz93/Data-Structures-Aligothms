#include<iostream>
using namespace std;

#define MAX_SIZE 10
struct Stack{
	int A[MAX_SIZE];
	int top = -1;
};
Stack stack;

void push(int x);
int top();
void pop();
bool isEmpty();
void print();

int main(){
	push(2); 
	push(3); 
	push(5); 
	push(6);
	push(7);
	push(8);
	print();
	pop();
	push(9);
	print();
	if (isEmpty()){
		cout << "Empty" << endl;
	}
	else{
		cout << "Not empty" << endl;
	}
	return 0;
}

void push(int x){
	if (stack.top >= MAX_SIZE - 1){
		cout << "Stack overflow!" << endl;
		return;
	}
	++stack.top;
	stack.A[stack.top] = x;
}
void pop(){
	if (stack.top == -1){
		cout << "Stack no elements " << endl;
		return;
	}
	--stack.top;
}
int top(){
	return stack.A[stack.top];
}
bool isEmpty(){
	if (stack.top == -1){
		return true;
	}
	else
	return false;
}
void print(){
	cout << "Stack :";
	for (int i = stack.top; i>=0;i--)
	cout << stack.A[i] << " ";
	cout << endl;
}