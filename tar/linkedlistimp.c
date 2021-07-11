#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

struct node *newnode(int x){
	struct  node* nn=(struct node*)malloc(sizeof(struct node));
	nn->data=x;
	nn->next=NULL;
	return nn;
}
struct node* insert_at_begin(struct node *head,int x)
{	struct node* nn=newnode(x);
	/* data */
	if(head==NULL)
	 head=nn;
	else{
		nn->next=head;
		head=nn;
	}
	return head;
}
struct node* insert_at_pos(struct node* head,int x,int pos){
	struct node *nn=newnode(x);
	struct node *ptr=head;
	int i;
	for(i=0;i<pos-1;i++)
		ptr=ptr->next;
	nn->next=ptr->next;
	ptr->next=nn;
	return head;
}
struct node *insert_at_end(struct node* head,int x)
{
	struct node *nn=newnode(x);
	if(head==NULL)
		head=nn;
	else{
		struct node* ptr=head;
		while (ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=nn;
		
	}
	return head;
}
struct node* delete_at_begin(struct node* head){
	struct node* delnode=head;
	if(head==NULL)
		printf("Nothing to delete");
	else{
			head=delnode->next;
			free(delnode);
			delnode=NULL;
	}
	return head;
}
struct node *delete_at_pos(struct node *head,int pos){
	struct node *delnode=NULL;
	struct node *ptr=head;
	if(head==NULL)
		printf("Nothing to print");
	else{
		int i;
		for(i=0;i<pos-1;i++)
			ptr=ptr->next;
		delnode=ptr->next;
		ptr->next=delnode->next;
		free(delnode);
		delnode=NULL;
	}
	return head;
}
struct node* delete_at_end(struct node* head){
	struct node *delnode=NULL;
	struct node *ptr=head;
	if(head==NULL)
		printf("Nothig to delete");
	else{
		while(ptr->next->next!=NULL)
			ptr=ptr->next;
		delnode=ptr->next;
		ptr->next=NULL;
		free(delnode);
		delnode=NULL;
	}
	return head;
}

void display(struct node *head){
	struct node* ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

int main(){
struct node* head=NULL;
	int n;
	scanf("%d",&n);
	int arr[n],i,brr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		head=insert_at_begin(head,arr[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&brr[i]);
		head=insert_at_end(head,brr[i]);
	}
	head=insert_at_pos(head,56,4);
	head=delete_at_begin(head);
	head=delete_at_end(head);
	head=delete_at_pos(head,2);
	display(head);
}


