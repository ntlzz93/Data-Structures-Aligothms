//#include<iostream>
//using namespace std;
//
//struct Node{
//	int data;
//	Node* next;
//}*head;
//
//bool isEmpty(Node* p);
//void insertToHead(int value);
//void insertToTail(int value);
//void insertToPosition(int value, int pos);
//void deleteNodePos(int pos);
//void retreiveNode(int &pos, int &value);
//void print();
//void printRecursive(Node* p);
//void reverse(Node* p);
//int main(){
//	head = NULL;
//	insertToTail(4);
//	insertToTail(3);
//	insertToTail(2);
//	print();
//	insertToHead(5);
//	insertToHead(6);
//	insertToTail(7);
//	insertToPosition(3, 2);
//	print();
//	/*deleteNodePos(3);
//	print();
//	int value = 0;
//	int pos;
//	cout << "Retreive nth position: "; cin >> pos;
//	retreiveNode(pos, value);
//	cout << "Value of node " << pos << " is " << value << endl;*/
//	cout << "Print recursive :" << endl;
//	printRecursive(head);
//	cout << endl;
//	cout << "Reverse: " << endl;
//	reverse(head);
//	cout << endl;
//	
//	return 0;
//}
//bool isEmpty(Node* p){
//	bool outcome = true;
//	if (p == NULL){
//		outcome = true;
//	}
//	else{
//		outcome = false;
//	}
//	return outcome;
//}
//void insertToHead(int value){
//	Node* newNode = new Node();
//	newNode->data = value;
//	newNode->next = head;
//	head = newNode;
//	
//}
//void insertToTail(int value){
//	Node* newNode = new Node();
//	Node* p = head;
//	if (head == NULL){
//		newNode->data = value;
//		newNode->next = NULL;
//		head = newNode;
//	}
//	else{
//		while (p->next != NULL){
//			p = p->next;
//		}
//		p->next = newNode;
//		newNode->data = value;
//		newNode->next = NULL;
//	}
//}
//void insertToPosition(int value, int pos){
//	Node* newNode = new Node();
//	Node* temp1 = head;
//	 insert first node position
//	if (pos == 1){
//		insertToHead(value);
//	}
//	else {
//		 insert node nth position
//		for (int i = 0; i < pos - 2; i++){
//			temp1 = temp1->next;
//		}
//		newNode->data = value;
//		newNode->next = temp1->next;
//		temp1->next = newNode;
//	}
//	
//}
//void deleteNodePos(int pos){
//	 delete the first node
//	Node* temp1 = new Node();
//	temp1 = head;
//	if (pos == 1){
//		head->next = temp1->next;
//		delete(temp1);
//		return;
//	}
//	else{
//		 delete the nth node
//		Node* temp2 = new Node();
//		for (int i = 0; i < pos - 2; i++){
//			temp1 = temp1->next;
//			temp2 = temp1->next;
//		}
//		temp1->next = temp2->next;
//		delete(temp2);
//		return;
//	}
//}
//void retreiveNode(int &pos, int &value){
//	Node* temp = head;
//	for (int i = 0; i < pos-1; i++){
//		temp = temp->next;
//	}
//	value = temp->data;
//}
//void printRecursive(Node* p){
//	if (p == NULL){
//		return;
//	}
//	cout << p->data <<" ";
//	printRecursive(p->next);
//}
//void reverse(Node* p){
//	if (p == NULL){
//		return;
//	}
//	reverse(p->next);
//	cout << p->data<< " " ;
//}
//void print(){
//	Node *temp = new Node();
//	temp = head;
//	cout << "List are: " << endl;
//	while (temp->next != NULL){
//		cout << temp->data << "->";
//		temp = temp->next;
//	}
//	cout << temp->data << endl;
//}