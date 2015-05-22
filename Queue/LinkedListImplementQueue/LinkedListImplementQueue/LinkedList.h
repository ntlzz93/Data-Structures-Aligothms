#ifndef LList_H
#define LList_H

template<class T>
struct Node{
	T data;
	Node * next;
};

template<class T>
class LinkedList{
private:
	 Node* head;
public:
	Single_Linked_List();
	bool isEmpty();
	void insertToHead(T value);
	void insertToTail(T value);
	void insertToPosition(int pos , T value);
	void deleteNodePos(int pos);
	void retreiveNode(int &pos, T &value);
	void print();
};

template<class T>
LinkedList<T>::LinkedList(){
	head = NULL;
}

template<class T>
void LinkedList<T>::insertToHead(T value){
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

template<class T>
void LinkedList<T>::insertToTail(T value){
	Node* newNode = new Node();
	Node* temp = head;
	if (head == NULL){
		insertToHead(value);
	}
	while (temp->next != NULL){
		temp = temp->next;
	}
	newNode->data = value;
	newNode->next = NULL;
	temp->next = newNode;
}
template<class T>
void LinkedList<T>::insertToPosition(int pos, T value){
	Node* newNode = new Node();
	Node* temp1 = head;
	
	// insert into the first node
	if (head == NULL){
		insertToHead();
		return;
	}
	else{
		// insert into the nth node
		for (int i = 0; i < pos - 2; i++){
			temp1 = temp1->next;
		}
		newNode->data = value;
		temp->next = newNode;
	}
}
template<class T>
void LinkedList<T>::deleteNodePos(int pos){
	Node* newNode = new Node();

}
#endif