#include<iostream>
using namespace std;
#include"Queue_Node.h"
#include"dll_ImplemetQueue.h"

int main(){
	cout << "Single linked list implement queue" << endl;
	Queue queue;
	queue.Enqueue(2); queue.Print();
	queue.Enqueue(4); queue.Print();
	queue.Enqueue(6); queue.Print();
	queue.Dequeue();  queue.Print();
	queue.Enqueue(8); queue.Print();
	cout << queue.Front() << endl;

	cout << "Double linked list implement queue" << endl;
	dllQueue dllqueue;
	dllqueue.Enqueue(3); dllqueue.Print();
	dllqueue.Enqueue(4); dllqueue.Print();
	dllqueue.Enqueue(5); dllqueue.Print();
	dllqueue.Enqueue(6); dllqueue.Print();
	dllqueue.Enqueue(7); dllqueue.Print();
	dllqueue.Dequeue(); dllqueue.Print();
	cout << dllqueue.Front() << endl;
	return 0;
}