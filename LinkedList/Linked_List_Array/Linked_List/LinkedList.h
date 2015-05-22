#ifndef Linked_List_H
#define Linked_List_H
#include"Node.h"
class SingleLinkedList
{
public:
	SingleLinkedList();
	~SingleLinkedList();
	Node* create_node(int);
	void insert_begin();
	void insert_pos();
	void insert_last();
	void delete_pos();
	void sort();
	void search();
	void update();
	void reverse();
	void display();

private:
	Node * head;
};

SingleLinkedList::SingleLinkedList()
{
	head = NULL;
}

SingleLinkedList::~SingleLinkedList()
{
}

/*
	Creating Node		
*/

Node* SingleLinkedList::create_node(int value){
	Node *temp, *s;
	temp = new Node();
	if (temp == NULL){
		cout << "Memory not allocated " << endl;
		return 0;
	}
	else{
		temp->data = value;
		temp->link = NULL;
		return temp;
	}
}
#endif