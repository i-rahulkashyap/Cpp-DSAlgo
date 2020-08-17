#include<iostream>
using namespace std;
void swap(int *a ,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void SelectionSort(int *input ,int size){
	for(int i=0;i<size;i++){
		
		int minelement=input[i], minIndex=i;
		for(int j=i+1;j<size;j++){
			if(input[j]<minelement){
				minelement=input[j];
				minIndex=j;
			}
		}
		swap(input[i],input[minIndex]);
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
	SelectionSort(input,n);
	
	for(int i=0;i<n;i++){
		cout<<input[i]<<" ";
	}
	cout<<endl;
}
