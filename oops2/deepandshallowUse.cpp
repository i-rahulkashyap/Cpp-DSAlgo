#include<iostream>
#include<string.h>
using namespace std;
#include"deepandshallow.cpp"  //always remember this must be below namespace selection
int main(){
	char name[]="abcd";
	Student s1(20,name);
	s1.print();
	name[3]='e';
	Student s2(24,name);
	s2.print();
	//See the absurd magic called Shallow Copy
	s1.print();

}
