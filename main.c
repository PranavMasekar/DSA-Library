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
    displayStack(p2);
    peek(p2, -1);

    // push(1);
    // push(2);
    // push(3);
    // pop();
    // displayStack();

    // // LinkdedList

    //
    //    ll *stnode;
    //    stnode= createllnode(6);
    //    insertAtEndll(8,stnode);
    //    displayll(stnode);
    
    //    ll *second;
    //    second= createllnode(6);
    //    second=insertAtHeadll(66,second);
    //    second=deleteAtHeadll(second);
    //    insertAtEndll(8,second);
    //    insertAtIndexll(9,1,second);
    // //    deleteAtIndexll(1,second);
    // //    deleteAtlastll(second);  
    // //    deleteAtvaluell(9,second);
    //     displayll(second);
    
    



    return 0;
}