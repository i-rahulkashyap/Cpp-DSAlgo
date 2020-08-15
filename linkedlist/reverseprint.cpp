// Print a given linked list in reverse order. Tail first. You can't change any pointer in the linked list
#include <iostream>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* reverseLL(node *head){
	if(head==NULL || head->next==NULL){
	 return head;	
	}
	//rec call
	node* smallhead=reverseLL(head->next);
	//assume 1-2-3-4-5-NULL
	//now is  5-4-3-2-NULL
	//SMALL CALCULATION
	node*temp=smallhead;
	while(temp->next!=NULL){
	temp=temp->next;	
	}
	//here in tem=NULL so need to change parameter to temp->next
	//now i have last node in temp
	temp->next=head;
	//to break the link b/w head and temp as previoulsy temp was just after head
	head->next=NULL;
	return smallhead;
}
void print_linkedlist_spl(node*head)
{
    //write your code here
    // node*temp=head;
    	//node*temp=head;
	if(head==NULL)
    {
        return;
    }
//     if(temp->next==NULL){
//         cout<<temp->data <<" ";
    
        
    

    print_linkedlist_spl(head->next);
	cout<<head->data;
	
    
}
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL,*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL)                  {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node*head=takeinput();
	//node*temp=head;
   // print(head);
    print(head);
    node*temp=reverseLL(head);
    cout<<endl;
    print(temp);
	//print(head);
	//cout<<"\nabcd";
    

}




