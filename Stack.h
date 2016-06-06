#ifndef _Stack_h
#define _Stack_h
#include "Queue.h"

// initialize max string size of 50 characters
typedef char StackElement; // define StackElement

class Stack
{
public:
	Stack()
		{
			top=-1;
			arr[MAX]=0;
		} // default stack constructor

	void push(StackElement & ch); // push function
	StackElement pop(); // top and pop functions combined
	bool empty() const; // empty function

private:
	StackElement arr[MAX]; // define char array
	int	top; // define int top
};
/*******************************************
FUNCTION: push()
DESCRIPTION: Pushes an element onto the stack
PRECONDITION: Waiting for function call
POSTCONTION: New element character on top of stack
*******************************************/
inline void Stack::push(StackElement & ch){
	if(top<MAX)
	{
		top++; // increment top
		arr[top]=ch; // push onto stack
	}
	else{
		cout<<"Stack is full.\n"; // display stack is full
	}
}
/*******************************************
FUNCTION: pop()
DESCRIPTION: Reads and pops top element off the stack
PRECONDIION: Waiting for function call
POSTCONDITION: One element read and removed fromt he stack
RETURN: Top element from stack
********************************************/
inline StackElement Stack::pop(){
	if(top>-1)
	{
		return(arr[top]); // returns top element
		top--;	// remove froms stack
	}
	else
	{
		cout<<"Stack is empty.\n"; // display stack is empty
		return (0);
	}
}
/*******************************************
FUNCTION: empty()
DESCRIPTION: returns result value if stack is empty
PRECONDITION: result=false
POSTCONDITION: result may be true or remain false
RETURN: result if true or false
********************************************/	
inline bool Stack::empty() const{
bool result=false; // initialize bool as false

	if (top==-1)
	{
		result=true; // if top is -1 return result true
		return(result);
	}
	else
	{
return(result); // else return false
}
}
#endif