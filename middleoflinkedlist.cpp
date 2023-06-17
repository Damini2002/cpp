using namespace std;
#include<iostream>
class node
{
	public:
		int data;
		node* next;
}*head=NULL;
int main()
{
	int i,n,temp;
	node *help;
	cout<<"enter number of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter element "<<i+1<<":";
		cin>>temp;
		node *newnode=new node();
		newnode->data=temp;
		//newnode=temp;
		if(head==NULL)
			head=newnode;
		else
		{
			help=head;
			while(help->next!=NULL)
				help=help->next;
			help->next=newnode;
		}
	}
//	cout<<head->data<<endl;
	help=head;
	while(help->next!=NULL)
	{
		cout<<help->data<<" ";
		help=help->next;	
	}
	cout<<help->data<<endl;
	node *ptr1=head;
	node *ptr2=head;
	//cout<<ptr1->data<<" "<<ptr2->data;
	if(head!=NULL)
	{
		while(ptr2!=NULL and ptr2->next!=NULL)
		{
			ptr1=ptr1->next;
			ptr2=ptr2->next->next;
		}
		cout<<"the middle element of linked list is: "<<ptr1->data;
	}
}
