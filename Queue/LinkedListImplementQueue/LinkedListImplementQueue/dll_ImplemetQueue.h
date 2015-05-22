/* Double Linked List Implement Queue */
#ifndef DLL_Queue_H
#define DLL_Queue_H

class dllQueue{
private:
	struct Node{
		int data;
		Node* next;
		Node* previous;
	};
	Node* front;
	Node* rear;
public:
	dllQueue();
	void Enqueue(int data);
	void Dequeue();
	bool isEmpty();
	int Front();
	void Print();
};
dllQueue::dllQueue(){
	front = NULL;
	rear = NULL;
}
void dllQueue::Enqueue(int data){
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;
	newNode->previous = NULL;
	if (front == NULL && rear == NULL){
		front = rear = newNode;
	}
	else{
		Node* temp = rear;
		temp->next = newNode;
		newNode->previous = temp;
		rear = rear->next;
	}
}
void dllQueue::Dequeue(){
	if (front == NULL){
		return;
	}
	Node* temp = front;
	front = front->next;
	delete(temp);
}
int dllQueue::Front(){
	return front->data;
}
bool dllQueue::isEmpty(){
	if (front == NULL && rear == NULL)
		return true;
	else
		return false;
}
void dllQueue::Print(){
	Node* temp = front;
	while (temp->next != NULL){
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << temp->data;
	cout << endl;
}
#endif