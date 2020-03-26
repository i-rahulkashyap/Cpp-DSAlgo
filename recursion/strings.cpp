#include<iostream>
using namespace std;
int main(){
	string s="abc";
	cout<<s<<endl;
	//char ch[10]="edfg";   ALLOWED
	/* this is NOT ALLOWED
	char ch[10];
	ch[]="abcd";
	cout<<ch<<endl;
	*/
	//STATICALLY ALLOCATION
	string str;
	str="abcd";
	cout<<str<<endl;
	//DYNAMIC ALLOCATION
	string *s1=new string;
	*s1="xyz";
	cout<<s1<<endl;  //ADDR
	cout<<*s1<<endl; //VAL
	
	/*s1[0]='a';             IF these two line will be written the below size will be ambiguous
	cout<<*s1<<endl;
	*/ 
	//cout<<(*s1).size()<<endl;  //AMBIGUOUS
	//cout<<s1->size()<<endl;    //AMBIGUOUS if index element re-initiated
	cout<<str.size()<<endl;   //ANS:4
	cout<<str.length()<<endl; //ans:4
	str="qwerty";
	cout<<str<<endl;
	cout<<str.size()<<endl;   //ANS:6
	cout<<str.length()<<endl; //ans:6

	//CONCATENATION
	string s2="yuiop";
	s2+=str;
	cout<<s2<<endl;
	
	s2[0]='A';
	cout<<s2<<endl;
	//SUBSTRING 
	cout<<s2.substr(3)<<endl;
	cout<<s2.substr(3,3)<<endl;
	//FINDING THE INDEX OF PART OR WHOLE AS PER REQUIRE WHERE WHOLE DOESN'T MAKE ANY SENSE
	cout<<s2.find("qwerty")<<endl;   //ANS:5
	cout<<s2.find('t')<<endl;   	//ANS:9


	/*string arr[10];
	cout<<arr.size();
	*/ //as sir said to make collection of many string we need string array

	

	
}
