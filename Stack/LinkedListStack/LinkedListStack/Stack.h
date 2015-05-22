/*Stack implemented by Linked List*/
#ifndef Stack_Linked_List_H
#define Stack_Linked_List_H

struct Node{
	int data;
	Node* next;
};

class Stack{
private:
	Node* top;
public:
	Stack();
	void Push(int value);
	void Pop();
	bool isEmpty();
	int Top();
};
Stack::Stack(){
	top = 0;
}
void Stack::Push(int value){
	Node* temp = new Node();
	temp->data = value;
	temp->next = top;
	top = temp;
}
void Stack::Pop(){
	Node* temp = top;
	if (top == 0){
		return;
	}
	top = top->next;
	delete(temp);
}
int Stack::Top(){
	return top->data;
}
bool Stack::isEmpty(){
	if (top == 0)return true;
	else return false;
}
#endif