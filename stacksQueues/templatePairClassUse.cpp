#include<iostream>
using namespace std;
#include"templatePairClass.cpp"
int main(){
 	Pair<Pair<int,int>,int> p2;
	p2.setY(10);
	Pair<int,int> p3;
	p3.setX(15);
	p3.setY(16);
	//need the pair as parameter
	p2.setX(p3);
	
	//getter
	cout<<p2.getY()<<endl;
	cout<<p2.getX().getX()<<endl;
	/*
	Pair<int> p1;
	p1.setX(10);
	p1.setY(20);
	cout<<p1.getX()<<" "<<p1.getY()<<endl;	
	Pair<double> p2;
	p2.setX(100.10);
	p2.setY(110.10);
	
	cout<<p2.getX()<<" "<<p2.getY()<<endl;
	*/
}
