#include<iostream>
using namespace std;
int test(int a[])
{
	cout<<"sizeof a"<<sizeof(a)<<endl;
	cout<<"a[0]"<<a[0]<<endl;
	
}
int main()
{
	/*int a=6;
	int *b;
	cout<<sizeof(a)<<endl;   OUTPUT: 4
	cout<<"size of b:"<<sizeof(b)<<endl; OUTPUT=8;
	*/
	int a[10];
	cout<<"in main size of a"<<sizeof(a)<<endl;
	test(a);
}
