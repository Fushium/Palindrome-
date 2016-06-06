#include "Queue.h"
#include "Stack.h"
#include <string>
#include<stack>
#include<queue>

#include <cstdlib>
/***************************MAIN******************************/
int main()
{
Stack S;	// initialize stack
Queue Q;	// initialize queue

int i=0;	// initialze int'i'

char string1[100]; // initialize char string

bool RESULT=false; // initilize bool RESULT to false


cout << "Please enter a line of text: " << endl;
cin.getline(string1,100);

int len=strlen(string1);
	for (size_t j = 0; j < len; j++){
		string1[j]=tolower(string1[j]);
	}

	while(string1[i]!=NULL)
	{
		S.push(string1[i]); // push chars individually from string to stack and queue
		Q.enqueue(string1[i]);	
		i++; // next char
	}



	while(i>0){
		if(S.pop()==Q.dequeue()) // compare each element from stack and queue
		{	
			S.pop();
			Q.dequeue();
			RESULT=true; // if same for all chars return true
		}
		else{

			RESULT=false; // if not same for any char break and return false
			break;
		}
		i--;
	}
		if(RESULT==true){
			cout<<"\n"<<string1<<" \nThis is a palindrome\n"; // display if true
		}
		else{
			cout<<"\n"<<string1<<" \nThis is not a palindrome\n"; // display if false
		}

return 0;
}

