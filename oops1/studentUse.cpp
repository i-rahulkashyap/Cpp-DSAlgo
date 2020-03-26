#include<iostream>
using namespace std;
#include"student.cpp"
int main(){
	Student s1;  //Constructor 1 Called
	//s1.age=20;
	//s1.rollNumber=123;
	//cout<<"s1.age:"<<s1.age<<endl;
	//cout<<"s1.rollNumber: "<<s1.rollNumber<<endl;
	
	Student *s2=new Student(101);  //Constuctor 2 Called  but destructor won't be called
	Student s3(10,102);            //Constructor 3 Called 
	cout<<"Address of s3: "<<&s3<<endl;	
	//(*s2).age=21;             //SYNTAX1  note that bracket is compulsory here
	//s2->rollNumber=124;       //SYNTAX2 arrow operator
	//cout<<"s2->age: "<<s2->age<<endl;
	//cout<<"s2->rollNumber: "<<s2->rollNumber<<endl;	
	//Student s3(10,125);
	//cout<<"Address of s3: "<<&s3<<endl;
	//Copy Connstructor
	Student s4(s3);  
	//Student *s5(s4);
	//Student s6(*s5);
	//student *s7(*s2);
	//*s7=s3;
	//Student s8;
	//s8=*s2;
	Student *s9=new Student;
	*s9=*s2;
	delete s2;  //After writing this destructor called of s2 not before this
	//delete s5;
	//delete s7;
	delete s9; //Similarly her too.

}
