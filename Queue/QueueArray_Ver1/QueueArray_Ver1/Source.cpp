#include<iostream>
using namespace std;
#include"QueueArray.h"

int main(){
	Queue<int> queue;
	queue.Enqueue(2);
	queue.Enqueue(3);
	queue.Enqueue(4);
	
	cout << queue.Front() << endl;
	queue.Dequeue();

	cout << queue.Front() << endl;
	queue.Dequeue();

	cout << queue.Front() << endl;
	queue.Dequeue();

	if (queue.isEmpty()){
		cout << "Yes empty" << endl;
	}
	else{
		cout << "No empty" << endl;
	}

	if (queue.isFull()){
		cout << "Yes Full" << endl;
	}
	else{
		cout << "No Full" << endl;
	}
	
	return 0;
}