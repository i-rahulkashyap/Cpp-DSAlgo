#include<iostream>
using namespace std;
void print

void print(int **edges,int n,int sv ,bool *visited){

	cout << sv << endl;
  visited[sv] = true;
  for(int i=0; i<n; i++){
    if(i==sv){  //we can omitt this as sv is already passed hard coded 0 so eventually this will happen to continue so change i=1 and if ko omit kar do
      continue;
    }
    if(edges[sv][i]==1){
      if(visited[i]){
        continue;
      }
      print(edges, n, i, visited);
    }
  }
}
/*	cout<<sv<<endl;
	visited[sv]=true;
	for(int i=0;i<n;i++){   //why not e :: i<e
		if(i==sv){
			continue;
		}
		if(edges[sv][i]==1){
			if(visited){
				continue;
			}
			print(edges,n,i,visited);
		}	  	
	}
	
}*/


int main(){
	//take input n vertices and e edges
	int n;
	int e;
	cin>>n>>e;
	
	//make a array of size n*n
	int** edges=new int*[n];
	for(int i=0;i<n;i++){
		edges[i]=new int[n];  //think in chunck like make a array then iti it to double pounter as array from heap with stack var will a addess and hence proved
		for(int j=0;j<n;j++){
			edges[i][j]=0;
		}
	}
	//here the array is built with all entries 0
	/* 4 *4
		0   1   2   3   4
	      0
	      ----------------------
	      1
	      ----------------------
	      2
	      ----------------------
	      3
	      ----------------------
	      4	
	*/
	
	//now assign first and second vertex true in adjacency matrix
	for(int i=0; i<e; i++){
   			 int f,s;
    			cin >> f >> s;
			edges[f][s]=1;
    			edges[s][f]=1;
 	 }
 	 
	bool* visited=new bool[n];
	
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
	print(edges,n,0,visited);
	return 0;
	
}
