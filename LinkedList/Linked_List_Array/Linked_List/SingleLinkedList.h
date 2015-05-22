#ifndef Linked_List_H
#define Linked_List_H
#include"Node.h"
class SingleLinkedList
{
public:
	SingleLinkedList();
	~SingleLinkedList();
	Node* create_node(int value);
	void insert_begin();
	void insert_pos();
	void insert_last();
	bool bIsEmpty();
	void delete_pos();
	void update();
	/*void sort();
	void search();
	
	void reverse();
	*/
	void display();
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
	Node *temp;
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

/*
	Insert element in begining
*/

void SingleLinkedList::insert_begin(){
	int value;
	cout << "Enter the value to be inserted: ";
	cin >> value;
	Node* temp, *p;
	temp = create_node(value);
	if (head == NULL){
		head = temp;
		head->link = NULL;
	}
	else{
		p = head;
		head = temp;
		head->link = p;
	}
	cout << "Element Inserted at beginning" << endl;
}

/*
	Insert node at last
*/

void SingleLinkedList::insert_last(){
	int value;
	cout << "Enter the value to be inserted: ";
	cin >> value;
	Node *temp, *s;
	temp = create_node(value);
	s = head;
	try{
		while (s->link != NULL){
			s = s->link;
		}
	}
		catch (exception& E){
			throw exception("Error");
			cerr << E.what();
		}
		temp->link = NULL;
		s->link = temp;
		cout << "Element Inserted at last" << endl;
	
	
}

/*
Display Elements of a link list
*/

void SingleLinkedList::display(){
	Node* temp;
	if (head == NULL){
		cout << "The list is empty" << endl;
		return;
	}
	temp = head;
	cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Elements of list are: " << endl;
	while (temp != NULL){
		cout << temp->data << " -> ";
		temp = temp->link;
	}
	cout << "NULL" << endl;
	cout << "-------------------------------------------" << endl;
}

/*
	Insertion of node at a given position
*/

/*
	Sorting Link List
*/

/*
	Delete element at a given position
*/

void SingleLinkedList::delete_pos(){
	int pos, i, counter = 0;
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return;
	} // end if
	cout << "Enter the position of value to be deleted: ";
	cin >> pos;
	 Node *s, *ptr;
	s = head;
	if (pos == 1)
	{
		head = s->link;
	}
	else
	{
		while (s != NULL)
		{
			s = s->link;
			counter++;
		}
		if (pos > 0 && pos <= counter)
		{
			s = head;
			for (i = 1; i < pos; i++)
			{
				ptr = s;
				s = s->link;
			}
			ptr->link = s->link;
		}
		else
		{
			cout << "Position out of range" << endl;
		}
		free(s);
		cout << "Element Deleted" << endl;
	}
}

/*
	Update a given Node
*/

void SingleLinkedList::update(){
	int value, pos, i;
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}
	cout << "Enter the node postion to be updated: ";
	cin >> pos;
	cout << "Enter the new value: ";
	cin >> value;
	Node *s, *ptr;
	s = head;
	if (pos == 1)
	{
		head->data = value;
	}
	else
	{
		for (i = 0; i < pos - 1; i++)
		{
			if (s == NULL)
			{
				cout << "There are less than " << pos << " elements";
				return;
			}
			s = s->link;
		}
		s->data = value;
	}
	cout << "Node Updated" << endl;
}
/*
	Searching an element
*/

/*
	Reverse Link List
*/


#endif