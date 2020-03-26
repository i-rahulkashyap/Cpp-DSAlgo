#include<iostream>
using namespace std;

int length(char s[])   //Agar return type int hai toh base case bhi int return karega 
{		       //Khud hi dekh lo lenght 0 hi hoga agar oth index par null char hai toh -1 toh illogical hai na RAHUL!
	if(s[0]=='\0')
	{
		return 0;
	}
	int smallLength=length(s+1);
	return smallLength+1;
}
void removeX(char s[]) //Agar return type void hai toh kahi se return karne ki jarurat hai like for base case
			//then return ke baad means into its suffix kuch bhi nahi hoga means: "return;"
{
	if(s[0]=='\0'){
		return;
	}
	if(s[0]!='x'){	
		removeX(s+1);
	} else {
		int i=1;
		for(;s[i]!='\0';i++){
			s[i-1]=s[i];
		}
			s[i-1]=s[i];  //for may be after removing oth 'x' uske baad waha bhi 'x' hi so
			removeX(s);
	}
}

int main()
{
	char str[100];
	cin>>str;
	int l=length(str);
	cout<<l<<endl;
	removeX(str);
	cout<<str<<endl;
	//l=length(str);
	cout<<l<<endl;
	
	
}
