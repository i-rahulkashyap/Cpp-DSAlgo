#include<iostream>
#include<math.h>
using namespace std;
int subs(string input,string output[]){
	//base case
	if(input.empty()){ //we can use NULL check or .size==0 but this is also great way to check
		output[0]="";
		return 1;	
	}
	//Induction hypothesis
	string smallString=input.substr(1);
	int smalloutputsize=subs(smallString,output);
	//small calculation
	for(int i=0 ;i<smalloutputsize;i++){
	output[i+smalloutputsize]=input[0]+output[i];
	}
	return 2*smalloutputsize;
}
int main(){
	//input
	string input;
	cin>>input;
	int size=input.size();
	cout<<size<<endl;
	int sizeofoutput=pow(2,size);
	cout<<sizeofoutput<<endl;
	//output
	string *output=new string[sizeofoutput];
	int count=subs(input,output);
	for(int i=0;i<count;i++)
	{
	  cout<<output[i]<<endl;
	}
}
