#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Edge{
	public:
	int source;
	int destination;
	int weight;
};
bool compare(Edge e1,Edge e2){
	return e1.weight <e2.weight;
}
int findParent(int* parent,int i){   // 0  1  2   3   4   5  
	if(parent[i]==i){            // 0  2  2   5   5   5
		return i;
	}
	
	return findParent(parent,parent[i]);
		
}
void kruskal(Edge* input,int n,int E){   //1st can also be Edge input[]
	//output and parent are required  of size n-1 and n respectively
	Edge* output=new Edge[n-1];  //this is the reason we need n in parameter of kruskal
	
 	//parent
 	int* parent=new int[n];
 	for(int i=0;i<n;i++){
 		parent[i]=i;
 	}
 	int count=0; //to iterate on output array
 	int i=0; //to work on input array to find the disjoint
	while(count!=n-1){
		Edge currentEdge=input[i];
		int sourceParent=findParent(parent,currentEdge.source);
		int destinationParent=findParent(parent,currentEdge.destination);
		if(sourceParent!=destinationParent){
			//safe to add @output[count]
			//output[count].source=sourceParent;  //gives error
			//output[count]=destinationParent; no need of these two statement above
			output[count]=currentEdge;
			parent[sourceParent]=destinationParent;
			count++;
		}
		i++;
	
	}
	
	//print
	for(int i=0;i<n-1;i++){
		if(output[i].source<output[i].destination){
			cout<<output[i].source<<" "<<output[i].destination<<" "<<output[i].weight<<endl;
		}
		else{
			cout<<output[i].destination<<" "<<output[i].source<<" "<<output[i].weight<<endl;
		}
	}	
	
}
int main(){
	//input
	int n,E; //n is number of Vertices and E is number of Edges
	cin>>n>>E;
	Edge* input=new Edge[E];
	for(int i=0;i<E;i++){
		int s,d,w;
		cin>>s>>d>>w;
		input[i].source=s;
		input[i].destination=d;
		input[i].weight=w;
	}
	
	sort(input,input+E,compare);
	
	kruskal(input,n,E);
}



