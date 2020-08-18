#include <iostream>
using namespace std;
#include<climits>


int findSecondLargest(int *input, int n)
{
    //Write your code here
    if(n<=1){
    	return INT_MIN;
    }
    int l=INT_MIN;
    int s=INT_MIN;
    for(int i=0;i<n;i++){
        if(input[i]>l){
            l=input[i];
        }
        else if(input[i]!=l && input[i]>s){
            s=input[i];
          
        }
        
    }
	return s;
}
/*

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int findSecondLargest(int *input, int n)
{
    //Write your code here
    if(n<=1){
        return INT_MIN;
    }
    int max=input[0];
    int maxindex=0;
    for(int i=0;i<n;i++){
        if(input[i]>max){
            max=input[i];
            maxindex=i;
        }
    }
    
    //swap maxindex and n-1
    swap(input[maxindex],input[n-1]);
    int secondmax=input[0];
    for(int i=0;i<n-1;i++){
        if(input[i]>secondmax){
            secondmax=input[i];
        }
    }
    
    return secondmax;

    
    
}

*/
int main()
{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;
		delete[] input;

	return 0;
}
