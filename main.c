#include "lib_dsa.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    // ***************************************  Queue  ****************************************** //

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

    // ***************************************  Stack  ****************************************** //

    // Stack *p1 = CreateStack(4);
    // p1 = push(p1, 3);
    // p1 = push(p1, 9);
    // p1 = pop(p1);
    // displayStack(p1);
    // Stack *p2 = CreateStack(8);
    // p2 = push(p2, 4);
    // p2 = push(p2, 8);
    // displayStack(p2);
    // peek(p2, -1);

    // ***************************************  LinkedList  ****************************************** //

    //    ll *stnode;
    //    stnode= createllnode(6);
    //    insertAtEndll(8,stnode);
    //    displayll(stnode);
    //    printf("\n");
    //    ll *second;
    //    second= createllnode(6);
    //    second=insertAtHeadll(66,second);
    //    second=deleteAtHeadll(second);
    //    insertAtEndll(8,second);
    //    insertAtIndexll(9,1,second);
    //    deleteAtIndexll(1,second);
    //    deleteAtlastll(second);  
    //    insertAtEndll(9,second);
    //    deleteAtvaluell(9,second);
    //    displayll(second);
    //    printf("\n");
    
    // ***************************************  Tree  ****************************************** //

    // TreeNode* root;
    // // Creation
    // root = CreateBST(5);
    // // Insertion
    // InsertInBST(root,7);
    // InsertInBST(root,2);
    // InsertInBST(root,1);
    // InsertInBST(root,18);
    // InsertInBST(root,20);

    // //Deletion
    // root = DeleteInBST(root,1);

    // //Display
    // int arr[5] ={};
    // printf("Inorder Traversal : \n");
    // Inorder(root,arr);
    // for(int i=0;i<5;i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    // printf("Preorder Traversal : \n");
    // Preorder(root,arr);
    // for(int i=0;i<5;i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    // printf("Postorder Traversal : \n");
    // PostOrder(root,arr);
    // for(int i=0;i<5;i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");

    // // Balance BST
    // TreeNode* root2;
    // root2 = CreateBST(50);
    // InsertInBST(root2,40);
    // InsertInBST(root2,30);
    // InsertInBST(root2,20);
    // InsertInBST(root2,10);
    // root2 = BalanceBST(root2);
    // int arr2[5] ={};
    // Preorder(root2,arr2);
    // for(int i=0;i<5;i++){
    //     printf("%d ",arr2[i]);
    // }
    // printf("\n");

    // ***************************************  Graph  ****************************************** //
    // int n = 5;
    // Graph* graph = (Graph*)malloc(sizeof(Graph));
    
    // CreateGraph(graph, n);
    // Display(graph, n);
    // BFS(graph, 0, n);
    // DFS(graph,0,n);
    return 0;
}