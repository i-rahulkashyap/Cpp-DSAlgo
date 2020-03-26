#include<iostream>
using namespace std;
int main(){
	int a[20];
	int n;
	/*
	cin>>n;
	int a1[n];
	*/
	int *p=new int;
	*p=10;	
	cout<<*p<<endl;
	cout<<p<<endl;

	double *pd=new double;
	*pd=10.3;
	cout<<*pd<<"ADD: "<<pd<<endl;

	int *parr=new int[50];
	parr[0] =100;            //interpret as *(parr+i); i is the index as here is 0th
	cout<<parr<<endl;  //this give the address of 0th element address	
	cout<<*parr<<endl; //this is 0th element
	cout<<parr[0]<<endl;//this is also 0th element


	//SMA vs DMA
	//in SMA our variable get clear after it's scope
	//DMA our variable is not have any name so we have to clear specifically
	//points to note location is deleted not pointer as it's is declared in static memory
	//we can point to other address via same pointer
	  
	//EXAMPLE
	delete pd;
	//for deleting array
	delete []parr;

	parr=new int[2*n];


}
