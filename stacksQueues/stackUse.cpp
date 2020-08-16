#include<iostream>
#include<climits>
using namespace std;
#include"stackusingarrayclass.cpp"
int main(){
//	stackUsingArray s;
	stackUsingArray s(4);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	//s.push(50);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;	
	cout<<s.pop()<<endl;
	cout<<s.isEmpty()<<endl;
	cout<<s.size()<<endl;
}
