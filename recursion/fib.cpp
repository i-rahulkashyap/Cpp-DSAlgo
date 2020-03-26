#include<iostream>
using namespace std;
int fib(int n){
	//base case
	//f(n)=f(n-1)+f(n-2)
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	int smalloutput1=fib(n-1);   //this will return from n==2----->n==1
	int smalloutput2=fib(n-2);   //this will return from n==2----->n==0
	return smalloutput1+smalloutput2;
}
int main(){
	int n;
	cin>>n;
	cout<<fib(n)<<endl;   //rem:0th fib is 0 :1st fib is 1 :2nd fib is also 1 :3rd fib is 2.

}
