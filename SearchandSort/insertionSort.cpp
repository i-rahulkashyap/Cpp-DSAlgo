#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void InsertionSort(int *input,int n){
	
		for(int j=1;j<n;j++){
				int k=j-1;
				int currentele=input[j];
				while(k>=0){
					if(input[k]>currentele){
						input[k+1]=input[k];
					}
					else{
						input[k+1]=currentele;
						break;
					}
					k--;
				}
				if(k<0){
					input[0]=currentele;
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
	InsertionSort(input,n);
	
	for(int i=0;i<n;i++){
		cout<<input[i]<<" ";
	}
	cout<<endl;
}
