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
	
	//statically created node
	Node n1(1);
	//to save head so that it won't be lost
	Node* head=&n1;
	Node n2(2);
	//n1.next=&n2;
	//cout<<head->data<<" "<<n2.data<<endl;  //head.data is wrong as head is pointer to get value need to access container then dot so head->data is same as (*head).data;
	//let us  create andconnect more nodes that is object of node class
	Node n3(3);
	Node n4(4);
	Node n5(5);
	//connect all 5 nodes

	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	n4.next=&n5;
	print(head);
	print(head);
}
