#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

void prims(int** edges,int n){
	int* parent=new int[n];
	int *weights=new int[n];
	bool* visited=new bool[n];
}
/*void prims(int** edges,int n){
    bool*visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    int* weight=new int[V];
    //assign 0 to oth vertex and other infinity ie INTMAX
	for(int i=0;i<V;i++){
        if(i==0){
            weight[i]=0;
        }
        weight[i]=INT_MAX;
    }
    
    int*parent=new int[V];
    parent[0]=-1;
	for(int i=0;i<V;i++){
       //visited[i]=i;
        int j=0;
        while(j<V){
            	if(edges[i][j]!=0 && !visited[i]){
 						visited[i]=true;
            		if(weight[i]>edges[i][j]){
                        weight[i]=edges[i][j];
						parent[j]=i;
                    }
                }
             j++;
            }
           
        
         i++;
        }

    sort(parent+1,parent+V);
	//Print
    for(int i=1;i<V-1;i++){
        cout<<parent[i]<<" "<<parent[i+1]<<" "<<edges[i][i+1]<<endl;
    }

}
*/

int main()
{
   int V, E, tempX, tempY;
   cin >> V >> E;
   int* *edges=new int*[V];   //quick revision  int* *edges=new int*; one variable
	
    for (int i=0;i<V;i++) {
        edges[i]=new int[V];
        for(int j=0;j<V;j++) {
            edges[i][j]=0;
        }
    }
    
    for(int i=0;i<E;i++){
        int f,s,w;
        cin>>f>>s>>w;
        //as undirected
        edges[f][s]=w;
        edges[s][f]=w;
    }
    //array built Okk
    //visited(bool) ,weight(int) ,parent(int)
    cout<<endl;  //just for clear printing below
    prims(edges,V);
    
    //flush
    for(int i=0;i<V;i++){
    	delete []edges[i];
    }
  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
  */

  return 0;
}

