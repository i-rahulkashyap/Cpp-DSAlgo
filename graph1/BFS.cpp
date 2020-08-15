#include<iostream>
#include<queue>
using namespace std;
void printBFS(int** edges,int V,int sv,bool* visited){
	queue<int> pendingVertices;
	pendingVertices.push(sv);
	sv=pendingVertices.front();
	cout<<sv<<endl;
	visited[sv]=true;

	while(!pendingVertices.empty()){
		for(int i=0;i<V;i++){
			if(sv==i){
				continue;
			}
			if(edges[sv][i]==1 && visited[i]==0){  //means present and not visited yet
				visited[i]=true;
				cout<<i<<endl;
				pendingVertices.push(i);
				//sv=pendingVertices.front();
			}
		
		}
		pendingVertices.pop();
		sv=pendingVertices.front();
	
	}
}
int main(){
	int V,E;
	cin>>V>>E;
	int** edges=new int*[V];
	//creates array
	for(int i=0;i<V;i++){
		edges[i]=new int[V]; //created 2-d array
		for(int j=0;j<V;j++){
			edges[i][j]=0; //intialized all values to 0 in 2-d array
		}
	}
	
	//lets mapp the edges in 2-d array
	for(int i=0;i<E;i++){
		int f,s;
		cin>>f>>s;
		edges[f][s]=1;
		edges[s][f]=1;
	}
	
	//create visited array to avoid loop
	
	bool* visited=new bool[V]; //as to mark the vertex that are travered already
	for(int i=0;i<V;i++){
		visited[i]=false;
	}
	
	printBFS(edges,V,0,visited);
}
