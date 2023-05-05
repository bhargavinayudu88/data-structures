#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;	
};
typedef struct node NODE;
NODE *head=NULL;
void insert_at_head(NODE *nn)
{
	if(head==NULL)
	{
		head=nn;
	}
	else{
		nn->next=head;
		head=nn;
	}
}
void insert_at_end(NODE *nn)
{
	if(head==NULL){
		head=nn;
	}
	else{
		NODE *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=nn;//inserting nn at tail
	}
}
void delete_at_head(){
	if(head==NULL){
		printf("No NODE\n");
		return;
	}
	printf("deleted element is %d:\n",head->data);
	NODE *dn=head;
	head=head->next;
	free(dn);
}
void delete_at_end(){
	if(head==NULL)
	{
		printf("NO NODES\n");
	}
	else if(head->next=NULL){//list containing single node
		printf("deleted element is %d\n,head->data");
		head=NULL;
		free(head);
	}
	else{//if list is containing more than 1 node
		NODE *temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		printf("deleted element is %d\n",temp->next->data);
		NODE *dn=temp->next;
		temp->next=NULL;
		free(dn);
	}
}
void insert_at_poition(NODE *nn,int position){
	if(position==1){
		insert_at_head(nn);
	}
	else{
		NODE *temp=head;
		int c=1;
		while(c<position-1){
			c++;
			temp=temp->next;
		}
		nn->next=temp->next;
		temp->next=nn;
		
	}
}
void display()
{
	if(head==NULL)
	{
		printf("No Nodes\n");
		return;
	}
	NODE *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}





int main()
{
	while(1)
	{
		int choice;
		printf(" Enter\n 1.Insert at head\n 2.Insert at tail\n 3.Delete at head\n 4.Delete at head\n 5.Dispaly and anything else to exit/n 6.");
		scanf("%d",&choice);
		if(choice==1){
			 //insert at head 
			 int val;
			 printf("enter the value that have to be inserted:");
			 scanf("%d",&val);
			 NODE *nn=(NODE *)malloc(sizeof(NODE));
			 nn->data=val;
			 nn->next=NULL;
			 insert_at_head(nn);
		}
		else if(choice==2)
		{
			//insert at end
			int val;
			print("enter the value to be inserted");
			scanf("%d",&val);
			NODE *nn=(NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			insert_at_end(nn);
			
		}
		else if(choice==3)
		{
			delete_at_head;
			//delete at head
		}
		else if(choice==4)
		{   //delete at end
			
		}
		else if(choice==5)
		{
			NODE *nn=(NODE *)malloc(sizeof(NODE));
			int val;
			printf("enter a value to be inserted");
			scanf("%d",&val);
			nn->data=val;
			nn->next=NULL;
			int position;
			printf("enter the position to insert the node");
			scanf("%d",&position);
			insert_at_position(nn,position);
				//insert_at_position
			
		}
		else if(choice==6)
		{
			//delete_at_position
		}
		else if(choice==7)
		{
			display();
			//display
		}
		else
		{
		printf("thankyou\n");
		break;
		}	
	}
}
