#include <stdio.h>
#include <stdlib.h>


struct QNode{
    int key;
    struct QNode *next;
};

struct Queue{
    struct QNode *front, *rear;
};

struct QNode* newMode(int k){
    struct QNode *temp = (struct QNode*)malloc(sizeof(struct QNode));
    temp->key = k;
    temp->next = NULL;
    return temp;
}

struct Queue* createQueue(){
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

void enQueue(struct Queue *q, int k){
    struct QNode *temp = newMode(k);

    /* if queue is empty, then new node is front and rear both*/
    if(q->rear ==  NULL){
        q->front = q->rear = temp;
        return;
    }

    /*Add the new node at the end of queue and change rear*/
    q->rear->next = temp;
    q->rear = temp;
}

struct QNode* deQueue(struct Queue *q){
    /*If queue is empty, return NULL*/
    if(q->front == NULL){
        return NULL;
    }

    /*Store previous front and move front one node ahead*/
    struct QNode* temp = q->front;
    q->front = q->front->next;

    /*If front become NULL, then change rear also a NULL*/
    if(q->front == NULL)
        q->rear = NULL;

    return temp;
}

void display(struct Queue *q){
    struct QNode *temp = newMode(q);
    /* if queue is empty, then new node is front and rear both*/
    if(q->front ==  NULL){
        printf("\nQueue is empty. \n");
    }else{
        for(int i = q->front; i <= q->rear; i++){
            printf("%d ", *q->rear);
        }
    }
}

/*********************************************/

void Demo_Queue(){
    struct Queue *q = createQueue();
    enQueue(q, 1);
    enQueue(q, 1);
    deQueue(q);
    deQueue(q);
    enQueue(q, 3);
    enQueue(q, 4);
    enQueue(q, 5);


    struct QNode *n = deQueue(q);
    if(n != NULL){
        printf("\nDeQueued item is %d\n", n->key);
    }
    display(q);


}
