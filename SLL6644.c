#include<stdio.h>
#include<stdlib.h>

//create function
struct node
{
	int data;
	struct node * link;
};
struct node * head  = NULL,*cur,*temp,*temp1;
struct node * create()
{
	int n;
	printf("enter no.of node");
	scanf("%d",&n);
	while(n--){
	cur = (struct node*)malloc(sizeof(struct node));
	scanf("%d",&(cur->data));
	cur -> link = NULL;
	}
	if(head == NULL){
	head = cur;
	}
	else{	
	temp = head;
	while(temp->link != NULL){
		temp = temp->link;
	}
		temp->link = cur;
	 }
	return head; 
}


//insert at begin
struct node* insert_begin(int ele)
{
	cur = (struct node*)malloc(sizeof(struct node));
	cur->data = ele;
	cur->link = head;
	head = cur;
	return head;
}

//insert at end
struct node*insert_end(int ele)
{
	cur = (struct node*)malloc(sizeof(struct node*));
	cur->data = ele;
	cur->link = NULL;
	temp = head;
	while(temp->link != NULL){
		temp = temp->link;
	    }
	temp->link=cur;
	return head;
	
}

//insert at position
struct node*insert_pos(int pos,int ele)
{
	int c =1;
	cur = (struct node*)malloc(sizeof(struct node));
	cur->data = ele;
	temp = head;
	while(c<pos-1){
	temp = temp->link;
	c++;
	}
    cur->link = temp->link;
	temp->link = cur;
return head;
} 

//delete at begin
struct node*delete_begin(struct node*head)
{
	temp = head;
	head = temp->link;
	printf("deleted ele %d",temp->data);
	free(temp);
return head;	
}

//delete at end
struct node*delete_end(struct node*head)
{
	temp = head;
	while(temp->link != NULL){
		temp1 = temp;
		temp = temp->link;
		}
		temp1->link = NULL;
	printf("deleted ele %d",temp->data);
	free(temp);
return head;
}
		
//delete at position
//struct node*delete_pos(struct node*head,int pos)
//display()
void display(struct node*head)
{
	temp = head;
	while(temp != NULL){
	printf("%d ->",temp->data);
		temp= temp->link;
	}
}

//MAIN
int main(){
	int ch,ele,pos;
	while(1){
		printf("1-create\n2-insert_begin\n3-insert_end\n4-insert_pos\n5-delete_begin\n6-delete_end\n7-display");
		printf("enter your choice:\n");
	scanf("%d",&ch);
  switch(ch){
	case 1: head = create();
			break;
	case 2: printf("enter the element:");
			scanf("%d",&ele);
			head = insert_begin(ele);
			break;
	case 3: printf("enter the element:");
			scanf("%d",&ele);
			head = insert_end(ele);
			break;
	case 4: scanf("%d",&ele);
			scanf("%d",&pos);
			head = insert_pos(ele,pos);
			break;
	case 5: head = delete_begin(head);
			break;
	case 6: head = delete_end(head);
			break;
	case 7: display(head);
			break;
	case 8: exit(0);
  }
 }
}






