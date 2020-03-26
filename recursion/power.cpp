#include<iostream>
using namespace std;
int power(int x,int n)
{
	//Base case
	if(n==0)
	{
		return 1;
	}
	//induction hypothesis
	int smalloutput=power(x,n-1);
	return x*smalloutput;
}

int main()
{
	int x;
	int n;
	cin>>x>>n;
	cout<<power(x,n);  //like x^n 2^3
}
