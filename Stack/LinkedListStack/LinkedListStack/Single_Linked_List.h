#ifndef SLinkedList_H
#define SLinkedList_H
#include<iostream>
using namespace std;
#include<exception>
template<class Type>
class Single_Linked_List{
private:
	struct Node{
		Type data;
		Node* next;
	};
	Node* head;
public:
	Single_Linked_List();
	~Single_Linked_List();
	bool isEmpty();
	void insertToHead(Type value);
	void insertToTail(Type value);
	void insertToPosition(Type value, Type pos);
	void deleteNodePos(Type pos);
	void retreiveNode(Type &pos, Type &value);
	void print();
	void sort();
	void clear();
};

template<class Type>
Single_Linked_List<Type>::Single_Linked_List(){
	head = NULL;
}

template<class Type>
Single_Linked_List<Type>::~Single_Linked_List(){
	delete head;
}

template<class Type>
bool Single_Linked_List<Type>::isEmpty(){
	bool outcome = true;
	if (head == NULL){
		outcome = true;
	}
	else{
		outcome = false;
	}
	return outcome;
}

template<class Type>
void Single_Linked_List<Type>::insertToHead(Type value){
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = head;
	head = newNode;

}

template<class Type>
void Single_Linked_List<Type>::insertToTail(Type value){
	Node* newNode = new Node();
	Node* p = head;
	if (head == NULL){
		newNode->data = value;
		newNode->next = NULL;
		head = newNode;
	}
	else{
		while (p->next != NULL){
			p = p->next;
		}
		p->next = newNode;
		newNode->data = value;
		newNode->next = NULL;
	}
}

template<class Type>
void Single_Linked_List<Type>::insertToPosition(Type value, Type pos){
	Node* newNode = new Node();
	Node* temp1 = head;
	//insert first node position
	if (pos == 1){
		insertToHead(value);
	}
	else {
		// insert node nth position
		for (int i = 0; i < pos - 2; i++){
			temp1 = temp1->next;
		}
		newNode->data = value;
		newNode->next = temp1->next;
		temp1->next = newNode;
	}
}

template<class Type>
void Single_Linked_List<Type> ::deleteNodePos(Type pos){
	//delete the first node
	Node* temp1 = new Node();
	temp1 = head;
	if (pos == 1){
		head = temp1->next;
		delete(temp1);
		return;
	}
	else{
		//delete the nth node
		Node* temp2 = new Node();
		for (int i = 0; i < pos - 2; i++){
			temp1 = temp1->next;
			temp2 = temp1->next;
		}
		temp1->next = temp2->next;
		delete(temp2);
		return;
	}
}

template<class Type>
void Single_Linked_List<Type>::retreiveNode(Type &pos, Type &value){
	Node* temp = head;
	for (int i = 0; i < pos - 1; i++){
		temp = temp->next;
	}
	value = temp->data;
}

template<class Type>
void Single_Linked_List<Type>::sort(){
	Node* ptr;
	Node* s;
	int value;
	ptr = head;
		while (ptr != NULL){
			for (s = ptr->next; s != NULL; s = s->next){
				if (ptr->data > s->data){
					value = ptr->data;
					ptr->data = s->data;
					s->data = value;
				}
			}
			ptr = ptr->next;
	}
}

template<class Type>
void Single_Linked_List<Type>::clear(){
	Node* temp = new Node();
	try{
		while (head != NULL){
			temp = head;
			head = temp->next;
			delete(temp);
		}
	}
	catch (exception& e){
		cerr<<e.what();
	}
}

template<class Type>
void Single_Linked_List<Type>::print(){
	Node *temp = new Node();
	cout << "List are: " << endl;
	if (head != NULL){
		temp = head;
		while (temp->next != NULL){
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << temp->data << endl;
	}
	else{
		cout << "List is empty" << endl;
	}
}
#endif