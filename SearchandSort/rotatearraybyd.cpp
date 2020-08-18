#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void rotate(int *input, int d, int n)
{
  
    int *extraarray=new int[d];
    for(int i=0;i<d;i++){
        extraarray[i]=input[i];
    }
    
     
    for(int i=0;i<n-d;i++){
        input[i]=input[i+d];
    }
    
    cout<<extraarray[1]<<endl;
    int x=0;
    for(int i=n-d;i<n;i++){
    	
        input[i]=extraarray[x];
        x++;
    }
    
    
}

int main()
{		
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}
		int d;
		cin >> d;
		
		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		delete[] input;
		cout << endl;
		
	return 0;
}
