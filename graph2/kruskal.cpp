#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class Edge{
	public:
	int source;
	int destination;
	int weight;
	Edge(){
	
	}
	Edge(int source,int destination,int weight){
		this->source=source;
		this->destination=destination;
		this->weight=weight;
	}
};

int main(){
	int V, E, tempX, tempY;
  	cin >> V >> E;
    
	//Edge* input=new Edge[E]; //if input inside loop then input 0th address might allotted to something else as memory is valid till scope so WRONG here Correct
	//Edge input[E];
	 Edge *input= new Edge[E];
    for(int i=0;i<E;i++){
        int source,destination,weight;
        cin>>source>>destination>>weight;
       
        //create object
       Edge obj(source,destination,weight);
       //obj.source=source;
       //obj.destination=destination;
       //obj.weight=weight;
       input[i]=obj;
        //now add this in input array
        //input[i]=obj;
    }
    //sort
    //sort(input,input+V,compare);
    
    for(int i=0;i<E;i++){
    	cout<<input[i].source<<" "<<input[i].destination<<endl;
    }
    
    //output array size V-1 for the MST
    
    
    
    //parent array size V no of vetices

	return 0;
	
}
