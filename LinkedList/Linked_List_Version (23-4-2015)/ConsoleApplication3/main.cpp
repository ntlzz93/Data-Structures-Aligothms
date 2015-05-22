
#include"Single_Linked_List.h"

int main(){
	
	Single_Linked_List<int> list ;
	list.insertToHead(4);
	list.insertToTail(5);
	list.insertToPosition(3, 3);
	list.insertToPosition(6,1);
	list.insertToPosition(7, 5);
	list.print();
	list.deleteNodePos(1);
	list.print();
	
	
	list.sort();
	list.print();
	list.clear();
	list.print();
	return 0;
}