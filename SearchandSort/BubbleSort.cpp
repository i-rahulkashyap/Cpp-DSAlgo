#include<iostream>
using namespace std;
void swap(int *a ,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}
void BubbleSort(int *input ,int size){
	
	//first compare i=0 and i+1=1 and swap if req 
	//then compare then i+1 and i+2 and swap 
	for(int i=0;i<size-1;i++){
		for(int j=0; j<size-1-i;j++){
			if(input[j]>input[j+1]){
				swap(input[j],input[j+1]);
			}
		}
	}
	
	

}
int main(){
		
	int n;
	cin>>n;
	int *input=new int[n];
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	cout<<endl;
	BubbleSort(input,n);
	
	for(int i=0;i<n;i++){
		cout<<input[i]<<" ";
	}
	cout<<endl;
}
