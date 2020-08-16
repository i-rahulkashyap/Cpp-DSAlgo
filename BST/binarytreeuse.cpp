#include<iostream>
//#include"binarytree.h"
#include<climits>
#include<queue>
#include<vector>  //used at getRootToNodePath

#include"BST.h"
using namespace std;
BinaryTreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout<<"Enter root data : ";
	cin>>rootData;
	if(rootData==-1){
	   return NULL;
	}
	BinaryTreeNode<int> * root=new BinaryTreeNode<int>(rootData);
	
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
	BinaryTreeNode<int> * front=pendingNodes.front();
	pendingNodes.pop();
	
	
	cout<<"Enter Left Child of " <<front->data;
	int leftChild;
	cin>>leftChild;
	if(leftChild!=-1){
		BinaryTreeNode<int> * child=new BinaryTreeNode<int>(leftChild);
		front->left=child;
		pendingNodes.push(child);
	}
	
	cout<<"Enter Right Child of " <<front->data;
	int rightChild;
	cin>>rightChild;
	
	if(rightChild!=-1){
		BinaryTreeNode<int> * child=new BinaryTreeNode<int>(rightChild);
		front->right=child;
		pendingNodes.push(child);
	
	
	}
	
	}
	
	
	return root;
}



BinaryTreeNode<int>* takeInput(){
	int rootData;
	cout<<"Enter Data : ";
	cin>>rootData;
	if(rootData==-1){
	   return NULL;
	}
	BinaryTreeNode<int> * root=new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int> * leftChild=takeInput();
	BinaryTreeNode<int> * rightChild=takeInput();
	root->left=leftChild;
	root->right=rightChild;
	return root;
}


void printLevelWise(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    if(root==NULL){
		return;
	}
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		BinaryTreeNode<int>* front=pendingNodes.front();
		pendingNodes.pop();
		cout<<front->data<<":";
		
		if(front->left!=NULL){
			cout<<"L"<<front->left->data <<",";
			pendingNodes.push(front->left);
		}
		
		if(root->right!=NULL){
		cout<<"R"<<root->right->data;
		pendingNodes.push(front->right);
		}
		cout<<endl;
	}
    

}

void printTree(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	if(root->left!=NULL){   //we can also write if(root->left)  means non null will we TRUE FOR if condition
		cout<<"L"<<root->left->data <<",";
	}
	
	if(root->right!=NULL){
		cout<<"R"<<root->right->data;
		}
	cout<<endl;
	printTree(root->left);
	printTree(root->right);
}

int numNodes(BinaryTreeNode<int> * root){
	if(root==NULL){
		return 0;
	}
	return 1 + numNodes(root->left)+ numNodes(root->right);
}
void inorder(BinaryTreeNode<int>* root){
	if(root==NULL){
		return ;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void printTree2(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << ":";
	if (root->left != NULL) {
		cout << "L" << root->left->data;
	}

	if (root->right != NULL) {
		cout << "R" << root->right->data;
	}
	cout << endl;
	printTree(root->left);
	printTree(root->right);
}

BinaryTreeNode<int>* buildTreeHelper(int*in,int* pre,int InS,int InE,int PreS,int PreE){

	if(InS>InE){
		return NULL;
	}
	int rootData=pre[PreS];
	//search rootIndex via finding root at inorder si element in preorder  and update rootIndex to that index
	int rootIndex=-1;
	for(int i=InS;i<=InE;i++){
		if(in[i]==rootData){
			rootIndex=i;
			break;
		}
	}
	//here no need to worry about -1 rootIndex as if -1 then autom. it will be INVALID 
	
	
	
	int lInS=InS;
	int lInE=rootIndex-1;
	int lPreS=PreS+1;  //preS has root data so next will be starting of left 
	int lPreE=(lInE-lInS)+lPreS;
	
	
	int rPreS=lPreE+1;
	int rPreE=PreE;
	int rInS=rootIndex+1;
	int rInE=InE;
	
	
		
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
	root->left=buildTreeHelper(in, pre, lInS, lInE, lPreS, lPreE);
	root->right=buildTreeHelper(in,pre, rInS, rInE,rPreS,rPreE);
	return root;
}
BinaryTreeNode<int>* buildTree(int* in,int*pre,int size){

	return buildTreeHelper(in,pre,0,size-1,0,size-1);

}

pair<int,int> diameterHeight(BinaryTreeNode<int>* root){
	if(root==NULL){
	 //inbuilt pair
	 pair<int,int> p;
	 p.first=0; //this height
	 p.second=0; //this is diameter
	 return p;
	 }
	 pair<int,int> leftAns=diameterHeight(root->left);
	 pair<int,int> rightAns=diameterHeight(root->right);
	 int lh=leftAns.first;
	 int ld=leftAns.second;
	 int rh=rightAns.first;
	 int rd=rightAns.second;
	 
	 int height=1+max(lh,rh);
	 int diameter=max(lh+rh,max(ld,rd));
	 pair<int,int> q;
	 q.first=height;
	 q.second=diameter;
	 
	 return q;
	 
	 
	 
	 
	}


int minimum(BinaryTreeNode<int>* root){
	if(root==NULL){
		return INT_MAX;
	}
	
	return min(root->data,min(minimum(root->left) ,minimum(root->right)));
	
}

int maximum(BinaryTreeNode<int>* root){
	if(root==NULL){
		return INT_MIN;
	}
	
	return max(root->data,max(maximum(root->left),maximum(root->right)));
	
	
}

/*bool isBSTReturn(BinaryTreeNode<int>* root){
	if(root==NULL){
		return true;
	}
	int leftMax=maximum(root->left);
	int rightMin=minimum(root->right);
	bool output=(root->data>leftMax)&&(root->data<=rightMin)&& isBST(root->left) && isBST(root->right);
	
	return output;
}*/



class isBSTReturn{
	public:
	bool isBST;
	int minimum;
	int maximum;	

};

isBSTReturn isBST2(BinaryTreeNode<int>* root){
	if(root==NULL){
		isBSTReturn output;
		output.isBST=true;
		output.minimum=INT_MAX;
		output.maximum=INT_MIN;
		return output;
	}
	
	isBSTReturn leftOutput=isBST2(root->left);
	isBSTReturn rightOutput=isBST2(root->right);
	
	int minimum=min(root->data,min(leftOutput.minimum,rightOutput.minimum));
	int maximum=max(root->data,max(leftOutput.maximum,rightOutput.maximum));
	
	bool isBSTFinal=(root->data>leftOutput.maximum) && (root->data<=rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;
	
	isBSTReturn output;
	output.minimum=minimum;
	output.maximum=maximum;
	output.isBST=isBSTFinal;
	
	return output;
}

bool isBST3(BinaryTreeNode<int>* root,int min=INT_MIN ,int max=INT_MAX){
	if(root==NULL){
		return true;
	}
	
	if(root->data<min || root->data>max){
		return false;
	}
	
	bool isLeftOK=isBST3(root->left, min,root->data-1);
	bool isRightOK=isBST3(root->right,root->data,max);
	
	return isLeftOK && isRightOK;
}
vector<int>* getRootToNodePath(BinaryTreeNode<int>* root,int data){
	if(root==NULL){
		return NULL;
	}
	
	if(root->data==data){
		vector<int>* output=new vector<int>();
		output->push_back(data);
		return output;
	}
	//left
	vector<int>* leftOutput=getRootToNodePath(root->left,data);
	if(leftOutput!=NULL){
	
		leftOutput->push_back(root->data);
		return leftOutput;
		
	}
	vector<int>* rightOutput=getRootToNodePath(root->right,data);
	if(rightOutput!=NULL){
			rightOutput->push_back(root->data);
			return rightOutput;
	}
	else{
		return NULL;
	}
	
}
int main(){
	/*BinaryTreeNode<int>* root=new BinaryTreeNode<int>(1);
	BinaryTreeNode<int>* node1=new BinaryTreeNode<int>(2);
	BinaryTreeNode<int>* node2=new BinaryTreeNode<int>(3);
	root->left=node1;
	root->right=node2;
	//cout<<root->data<<endl;
	//cout<<root->left->data<<endl;
	//cout<<root->right->data<<endl;
	*/
	
	/*
	BinaryTreeNode<int> * root=takeInputLevelWise();
	//printTree(root);
	//cout<<endl;
	//cout<<isBST2(root)<<endl;
	//isBSTReturn isbst=isBST2(root);
	//cout<<isbst.isBST<<endl;
	
	//cout<<isBST3(root)<<endl;
	vector<int>* output=getRootToNodePath(root,8);
	
	for(int i=0;i<output->size();i++){
		cout<<output->at(i)<<endl;
	}
	
	delete output;
	*/
	BinaryTreeNode<int>* root=takeInputLevelWise();
	BST b;
	bool ans=b.hasData(5);
	cout<<"ANS"<<ans<<endl;
	delete root;
}






