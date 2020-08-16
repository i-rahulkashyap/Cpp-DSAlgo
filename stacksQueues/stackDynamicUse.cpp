#include<iostream>
#include<climits>
using namespace std;
#include"stackusingdynamicarray.cpp"
int main(){
//	stackUsingArray s;
	stackUsingArray s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(100);
	s.push(1000);
	s.push(10000);
	s.push(100000);
	s.push(11);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;	
	cout<<s.pop()<<endl;
	cout<<s.isEmpty()<<endl;
	cout<<s.size()<<endl;
}
