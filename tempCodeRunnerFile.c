#include "lib_dsa.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    // QUEUE DONE

    // Queue * front;
    // front = CreateQueue(5);
    // enqueue(front,15);
    // enqueue(front,20);
    // enqueue(front,235);
    // front = dequeue(front);
    // displayQueue(front);

    // Queue * second;
    // second = CreateQueue(10);
    // enqueue(second,98);
    // enqueue(second,78);
    // enqueue(second,63);
    // second = dequeue(second);
    // displayQueue(second);

    // STACK DONE

    Stack *p1 = CreateStack(4);
    p1 = push(p1, 3);
    p1 = push(p1, 9);
    p1 = pop(p1);
    displayStack(p1);
    Stack *p2 = CreateStack(8);
    p2 = push(p2, 4);
    p2 = push(p2, 8);