#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int *p=&a[0];
	cout<<p<<endl;
	cout<<a<<endl;
	cout<<&a[0]<<endl;
	a[0]=5;
	cout<<*a<<endl;
	cout<<*(a+0)<<endl;

	cout<<sizeof(a);	
	cout<<sizeof(p)<<endl;

	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<&p<<endl;
	a=a+3;
	a++;
}
