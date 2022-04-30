#include <bits/stdc++>

using namespace std;

int main(){

	stack <int> s;

	s.push(2);
	s.push(3);
	s.push(4);


	s.pop();

	cout<<"The top element in the stack is: " << s.top() <<endl;



	if(s.empty())
		cout<<"The stack is currently empty";

	else
		cout<<"The stack is not empty";
}