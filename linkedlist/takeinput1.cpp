#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	//constructor to assign the data value 
	Node(int data){
	   this->data=data;
	   next=NULL; 		
	}

};






//work of takeinput is to take input from the user and return the address of first node i.e head
Node* takeinput(){
	/*
		Algorithm Step
		1.take first input and then take other after check the termination condition for input if data!=-1 then take other and so on 
	since 1st input is alway there so operation on first input will be in loop first iteration and 2nd input will be before end of first iteration and 
	process of 2 input will be done in 2nd iteration 
	input of 3rd data will before end of 2nd iteration
	process of third will be in 3rd iteration
	*/
	int data;
	cin>>data;
	Node *head=NULL;
	while(data!=-1){
		//will create dynamically  a node to insert the data
		//WARNING!:statically created node will be deleted after every while loop iteration 
		Node* newNode=new Node(data);
		if(head==NULL){
			head=newNode;  //not &newNode since newNode is already a addr due to dynamic creation
	
		}
		else{
			Node *temp=head; //to save head
			while(temp->next!=NULL){
			temp=temp->next;	
			}
			temp->next=newNode; //here if 4th node has NULL then after while loop this will updata NULL with
	//input ka address that newNode;
	
		}	


		cin>>data;	
	}

	return head;

}



void print(Node *head){
	//to make head safe must use temp var instead of head to iterate
	Node *temp=head;
	/*while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}*/
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	
}




int main(){
	Node *head=takeinput();
		print(head);

}
