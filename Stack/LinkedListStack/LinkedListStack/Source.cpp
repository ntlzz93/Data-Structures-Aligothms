#include<iostream>
using namespace std;
#include"Stack.h"

int main(){
	Stack stack;
	stack.Push(2); cout << stack.Top() << endl;;
	stack.Push(3); cout << stack.Top() << endl;
	stack.Pop(); cout << stack.Top()<<endl;
	return 0;
}
