#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *pa=&a;
	cout<<pa<<endl;
	pa++;
	cout<<pa<<endl;
	double d=100.35;
	double *pd=&d;
	cout<<pd<<endl;
	pd++;
	cout<<pd<<endl;
}
