#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int front = -1,rear = -1,a[SIZE];
void enqueue(int ele){
    a[++rear] = ele;
    if(front == -1)
        front = 0;
}
int dequeue(){
    if(front == rear){
        return a[front];
        front = rear = -1;
    }
    else{
        return a[front++];
    }
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d\n",a[i]);
    }
}

int main(){
    int ch,ele;
    while(1){
        printf("\n 1-enqueue \n 2-dequeue \n 3-display \n 4-exit \n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1 : if(rear == SIZE - 1)
                        printf("Queue overflow");
                     else{
                        printf("Enter element to be inserted :");
                        scanf("%d",&ele);
                        enqueue(ele);
                     }
                     break;
            case 2 : if(front == -1)
                        printf("Queue underflow");
                     else
                        printf("deleted element is %d",  dequeue());
                     break;
            case 3 : if(front == -1)
                        printf("Queue empty");
                     else
                        display();
                     break;
            case 4 : exit(0);

       }
    }
}
Output:
 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :1
Enter element to be inserted :5

 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :1
Enter element to be inserted :7

 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :3
5
7

 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :2
deleted element is 5
 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :3
7

 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :4

Process returned 0 (0x0)   execution time : 31.903 s
Press any key to continue.

ii)Pointers
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*front = NULL,*rear = NULL,*cur;
void enqueue(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    cur->link = NULL;
    if(front==NULL){
        front = rear = cur;
    }
    else{
        rear->link = cur;
        rear = cur;
    }

}
void dequeue(){
    if(front == NULL){
        printf("Queue underflow");
    }
    else if(front == rear){
        printf("deleted element is %d",front->data);
        front = rear = NULL;
    }
    else{
        printf("deleted element is %d",front->data);
        front=front->link;
    }
}
void display(){
    if(front == NULL){
        printf("Queue is empty");
    }
    else{
        cur = front;
        while(cur!=NULL){
            printf("%d\n",cur->data);
            cur = cur->link;
        }
    }
}

int main(){
    int ch,ele;
    while(1){
        printf("\n 1-enqueue \n 2-dequeue \n 3-display \n 4-exit \n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1 : printf("Enter element to be inserted :");
                     scanf("%d",&ele);
                     enqueue(ele);
                     break;
            case 2 :
                     dequeue();
                     break;
            case 3 : display();
                     break;
            case 4 : exit(0);

       }
    }
}
Output:
 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :1
Enter element to be inserted :1

 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :1
Enter element to be inserted :3

 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :3
1
3

 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :2
deleted element is 1
 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :3
3

 1-enqueue
 2-dequeue
 3-display
 4-exit
Enter your choice :4

Process returned 0 (0x0)   execution time : 19.213 s
Press any key to continue.
