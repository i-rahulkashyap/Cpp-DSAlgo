#include<iostream>
using namespace std;
int main(){
			
	string s;
	cin>>s;
	//cout<<s;
	s+="def";
	cout<<s<<endl;
	
	cout<<s.size()<<endl;
	cout<<s.find("abc")<<endl;
	cout<<s.substr(3,4)<<endl;
	cout<<s.substr(4)<<endl;

	string *s2=new string;
	*s2="xyz";
	cout<<s2<<endl;
	cout<<*s2<<endl;




}
