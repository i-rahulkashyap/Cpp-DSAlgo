#include<iostream>
#include<vector>
using namespace std;
int main()
	{
		//vector<int> *v=new vector<int> ();
		vector<int> v;  //static 
		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		cout<<v[0]<<endl;
		cout<<v[1]<<endl;
		cout<<v[2]<<endl;
		//sir had implemented using [] i have done using at() 
		for(int i=0;i<v.size();i++)
		{
			
			cout<<v.at(i)<<endl;
		}

		v.pop_back();
		for(int i=0;i<v.size();i++)
		{
			cout<<v.at(i)<<endl;
		}
		cout<<"LET ME SEE THE MAGIC"<<endl;
		for(int i=0;i<100;i++)
		{	
			cout<<"CAPACITY NOW:"<<v.capacity()<<endl;
			v.push_back(i+1);
			cout<<v.at(i)<<endl;
			cout<<"SIZE NOW:"<<v.size()<<endl;

		}


		vector<int> v1(4,12);
		v1.push_back(15);
		cout << v1.size() <<” “ v1.capacity();

		
			
	}
