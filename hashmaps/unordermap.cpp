#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
	   
	unordered_map<string,int> ourmap;
	//insert 1
	//pair<string,int> p("abc",1);
	//ourmap.insert(p);
	//insert 2
	ourmap["def"]=2;
	//find or access element
	cout<<ourmap["def"]<<endl;
	
}	
