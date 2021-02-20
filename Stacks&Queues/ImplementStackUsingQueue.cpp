#include <bits/stdc++.h> 

using namespace std; 

struct  MyStack { 

	queue<int> q1, q2; 
	int c; 
	MyStack() 
	{ 
		c = 0; 
	} 

	void push(int x) 
	{ 
	    c++;
		while(q1.empty()==false){
		    q2.push(q1.front());
		    q1.pop();
		}
		q1.push(x);
		while(q2.empty()==false){
		    q1.push(q2.front());
		    q2.pop();
		}
	} 

	void pop() 
	{ 

		if (q1.empty()) 
			return; 
		q1.pop(); 
		c--; 
	} 

	int top() 
	{ 
		if (q1.empty()) 
			return -1; 
		return q1.front(); 
	} 

	int size() 
	{ 
		return c; 
	} 
}; 

 
int main() 
{ 
	MyStack s; 
	s.push(10); 
	s.push(5); 
	s.push(15); 
	s.push(20);

	cout << "size is " << s.size() << endl; 
	cout <<"top element is "<<s.top() << endl; 
	s.pop(); 
	cout <<"top element is "<<s.top() << endl; 
	s.pop(); 
	cout <<"top element is "<<s.top() << endl; 

	cout << "size is " <<  s.size() << endl; 
	return 0; 
}
