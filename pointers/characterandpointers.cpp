#include<iostream>
using namespace std;
int main(){
		int a[]={1,2,3,4,5};
		char c[]="abcde";
		char ch1 = 'a';
	 char* ptr1= &ch1;
 	ch1++;
 cout << *ptr1 << endl;

		cout<<a<<endl;   //prints the address of a
		cout<<c<<endl;   //prnt the contnt becoz  c[] has underlying struct. with NULL char. so print till NULL char. 		
		//Let's do something weird
		char ch='a';
		char *pch=&ch;
		cout<<ch<<endl;
		cout<<pch<<endl;

		char chararr[]="XYZ";	 //GOOD PRACTICE as temp array is copied and located at new address for our work
		//char *pchararr="XYZ";	//BAD PRACTICE since modifying the temp. memory at it's original address.
	
	
}
