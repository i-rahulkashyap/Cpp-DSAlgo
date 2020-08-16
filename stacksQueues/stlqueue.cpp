#include<iostream>
using namespace std;
#include<queue>
int main(){
	queue<int> q;
	
	q.push(10);	
	q.push(20);	
	q.push(30);	
	q.push(40);
	cout<<q.front()<<endl; //10
	cout<<q.empty()<<endl;
	cout<<q.size()<<endl;
	q.pop();
	cout<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
		
}
