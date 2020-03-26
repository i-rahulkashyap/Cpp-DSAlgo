#include<iostream>
using namespace std;
int main(){
		int a=10;
		cout<<a<<endl;
		int *ptr=&a;
		cout<<a<<endl;
		cout<<*ptr<<endl;
		cout<<ptr<<endl;
		//int *x=0;  //NUll to avoid bad practice
		//cout<<x<<endl;
		//(*x)++;
		//cout<<*x<<endl;
		(*ptr)++;
		cout<<a<<endl;	
		cout<<*ptr<<endl;
		cout<<ptr<<endl;
}
