/* Single Linked List implement Queue */
#ifndef Queue_Node_H
#define Queue_Node_H

#include<iostream>
using namespace std;

class Queue{
private:
	struct Node{
		int data;
		Node* next;
	};
	Node* front;
	Node* rear;
public:
	Queue();
	void Enqueue(int value);
	void Dequeue();
	bool isEmpty();
	int Front();
	void Print();
};
Queue::Queue(){
	front = NULL;
	rear = NULL;
}
// add a element onto queue
void Queue::Enqueue(int value){
	Node* temp = new Node();
	temp->data = value;
	temp->next = NULL;
	if (front == NULL && rear == NULL){
		front = rear = temp;
	}
	else{
		rear->next = temp;
		rear = temp;
	}
}
// remove a element to queue
void Queue::Dequeue(){
	Node* temp = front;
	if (front == NULL){
		return;
	}
	if (front == rear){
		// the first node
		front = rear = NULL;
	}
	else{
		front = front->next;
	}
	delete(temp);
}
// check queue is empty / not empty
bool Queue::isEmpty(){
	if (front == NULL && rear == NULL)
		return true;
	else
		return false;
}
// get head element of queue 
int Queue::Front(){
		return front->data;
}
// disPlay 
void Queue::Print(){
	Node* temp = front;
	while (temp->next != NULL){
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << temp->data;
	cout << endl;
}
#endif