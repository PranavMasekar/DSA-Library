#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

void InsertInBST(TreeNode* root,int value){
    
}

TreeNode* CreateBST(int value){
    TreeNode* root = (TreeNode *)malloc(sizeof(TreeNode));
    root->val = value;
    root->left=NULL;
    root->right=NULL;
    return root;
}

void Inorder(TreeNode *root,int arr[],int index){
    if(root!=NULL){
        Inorder(root->left,arr,index+1);
        arr[index] = root->val;
        Inorder(root->right,arr,index+1);
    }
}
void Preorder(TreeNode *root,int arr[],int index){
    if(root!=NULL){
        arr[index] = root->val;
        Preorder(root->left,arr,index+1);
        Preorder(root->right,arr,index+1);
    }
}
void PostOrder(TreeNode *root,int arr[],int index){
    if(root!=NULL){
        PostOrder(root->left,arr,index+1);
        PostOrder(root->right,arr,index+1);
        arr[index] = root->val;
    }
}