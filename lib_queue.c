#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int data;
    struct queue *next;
} Queue;


struct queue * CreateQueue(int val){
    struct queue *n = (struct queue *)malloc(sizeof(struct queue));
    n->data = val;
    n->next = NULL;
    return n;
}

void displayQueue(Queue *f)
{
    struct queue *ptr = f;
    printf("Elements in the queue \n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int isQueueEmpty(Queue *f)
{
    if (f == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isQueueFull()
{
    struct queue *n = (struct queue *)malloc(sizeof(struct queue));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(Queue *f,int val)
{
    struct queue *n = (struct queue *)malloc(sizeof(struct queue));
    if (n == NULL)
    {
        printf("The queue is full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f  = n;
        }
        else
        {
            Queue * r = f;
            while(r->next!=NULL){
                r = r->next;
            }
            r->next = n;
            r = n;
        }
    }
}
Queue * dequeue(Queue *f)
{
    struct queue *ptr = f;
    if (f == NULL)
    {
        printf("The queue is Empty \n");
    }
    else
    {
        f = f->next;
        free(ptr);
    }
    return f;
}