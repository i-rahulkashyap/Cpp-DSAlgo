#include<iostream>
using namespace std;

//Let's make mirror function
void increment(int &n){
	n++;
} 
int main(){
	int i=10;
	int &j=i;
	increment(i);
	j++;
	cout<<i<<endl;

	/*int &k;
	k=i;   NOT ALLOWED AS DECLARED BUT NOT INITIALIZED
	*/
	
}
