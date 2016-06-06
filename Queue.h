#ifndef _Queue_h
#define _Queue_h

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

const int MAX=50; // initialize max string size of 50 characters

typedef char QueueElement; // define QueueElement

class Queue // Queue class
{
public:
	Queue()
		{
		front=0; 
		rear=0;
		arr[MAX]=0;
		} // Queue default constructor
	void enqueue(QueueElement & ch); // define enqueue
	QueueElement dequeue(); // define frontNremove
private:
	QueueElement arr[MAX]; // initialize QueueElement array
	int front, rear; // initialize int front and rear
};

/*******************************************
FUNCTION: enqueue()
DESCRIPTION: adds an element onto the queue
PRECONDITION: Waiting for element to add
POSTCONDITION: New element now on the queue
********************************************/
inline void Queue::enqueue(QueueElement &ch)
{
	if(front!=(rear+1)%MAX){
		arr[rear]=ch; // add element to rear of queue
		rear=(rear+1)%MAX;
	}
	else{
		cout<<"Error Queue is full\n"; // display queue is full
	}
}
/*******************************************
FUNCTION: dequeue()
DESCRIPTION: reads and removes front element from queue
PRECONDITION: front pointing to front of queue
POSTCONDITION: front element is returned and then incremented
********************************************/
inline QueueElement Queue::dequeue(){
	if(front!=rear)
	{
	return(arr[front]); // return front element
	front++;	// remove front element
	}
	else{
		cout<<"Queue is empty.\n"; // display queue is empty
		return(0);
	}
}
#endif