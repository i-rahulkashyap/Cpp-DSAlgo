#include<iostream>
#include<string.h>
using namespace std;
#include"student.cpp"
int main(){
	char name[]="abcd";
	//Student s1;
	/*1.FOR DEMO. OF DEEP AND SHALLOW COPY-------Student s1(20,name);
	s1.display();
	name[3]='e';
	Student s2(24,name);
	s2.display();
	s1.display();
	*/
	//Student s1(20,name);
	//s1.display();
	//Student s2(s1); //COPY CONSTRUCTOR	 SHALLOW COPY inbuit wala
	//s2.name[0]='x';
	//s1.display();
	//s2.display();

	//INITIALIZATION LIST
	Student s1(101,20);
	s1.display();	
	
}
