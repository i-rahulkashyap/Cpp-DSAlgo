#include<iostream>
using namespace std;
void printDFS(int**edges,int n,int sv,bool* visited){
	cout<<sv<<endl;
	visited[sv]=true;
	for(int i=0;i<n;i++){  //main row ko traverse karunga first so yeh col ko represent karna chahiye  means via this loop sv ko row aur i ko cell bana do in 2-d traveersal
		if(sv==i){
		continue;
		}
		if(edges[sv][i]==1){    //of edges[sv][i] is 1 then [i][sv] is also 1 as we marked in 2-d array initialization
			if(visited[i]){    //to break the loop issue 01 10
				continue;
			}
			printDFS(edges,n,i,visited);
		}
	}

}
int main(){
	int V,E;
	cin>>V>>E;
	//create array of V*E
	//I need a V*V matrix because mapping is done on vertext to vertex
	int**edges=new int*[V];
	for(int i=0;i<V;i++){
		edges[i]=new int[V];
		for(int j=0;j<V;j++){
			edges[i][j]=0;
		}
	}
	
	//to set all as given input  loop till E because of E given above is's must
	for(int i=0;i<E;i++){
		int f,s;
		cin>>f>>s;
		edges[f][s]=1;
		edges[s][f]=1;
	}
	
	bool *visited=new bool[V];
	for(int i=0;i<V;i++){
		visited[i]=false;
	}
	
	printDFS(edges,V,0,visited);
	return 0;
	//vector created
}
