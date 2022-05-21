#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

// Creation

TreeNode* CreateBST(int value){
    TreeNode* root = (TreeNode *)malloc(sizeof(TreeNode));
    root->val = value;
    root->left=NULL;
    root->right=NULL;
    return root;
}

// Insertion

void InsertHelper(TreeNode* root, TreeNode* parent ,int value){
    if(root==NULL){
       TreeNode* newNode = (TreeNode *)malloc(sizeof(TreeNode));
       newNode->val = value;
       newNode->left==NULL;
       newNode->right=NULL;
       if(value>parent->val) parent->right = newNode;
       else parent->left = newNode;
       return;
    }
    else if(value>root->val) InsertHelper(root->right,root,value);
    else InsertHelper(root->left,root,value);
}

void InsertInBST(TreeNode* root,int value){
    InsertHelper(root,root,value);
    return;
}

// Deletion

TreeNode* successor(TreeNode* root){
        root = root->right;
        while(root!=NULL && root->left!=NULL) root = root->left;
        return root;
}

TreeNode* DeleteInBST(TreeNode* root, int value){
    if(root==NULL) return NULL;
        if(value<root->val) root->left = DeleteInBST(root->left,value);
        else if(value>root->val) root->right = DeleteInBST(root->right,value);
        else {
            if(root->left==NULL){
                TreeNode* curr = root->right;
                free(root);
                return curr;
            }
            else if(root->right==NULL){
                TreeNode* curr = root->left;
                free(root);
                return curr;
            }
            else{
                TreeNode* succ;
                succ = successor(root);
                root->val = succ->val;
                root->right = DeleteInBST(root->right,succ->val);
            }
        }
        return root;
}

// Traversal 

void InOrderHelper(TreeNode* root, int* arr, int *index){
   if(root != NULL){
       InOrderHelper(root->left, arr, index);
       arr[(*index)++] = root->val;
       InOrderHelper(root->right, arr, index);
   }
}
void PostOrderHelper(TreeNode* root, int* arr, int *index){
   if(root != NULL){
       PostOrderHelper(root->left, arr, index);
       PostOrderHelper(root->right, arr, index);
       arr[(*index)++] = root->val;
   }
}
void PreOrderHelper(TreeNode* root, int* arr, int *index){
   if(root != NULL){
       arr[(*index)++] = root->val;
       PreOrderHelper(root->left, arr, index);
       PreOrderHelper(root->right, arr, index);
   }
}
void Inorder(TreeNode *root,int *arr){
    int index = 0;
    InOrderHelper(root,arr,&index);
}
void Preorder(TreeNode *root,int *arr){
    int index = 0;
    PreOrderHelper(root,arr,&index);
}
void PostOrder(TreeNode *root,int *arr){
    int index = 0;
    PostOrderHelper(root,arr,&index);
}

// Balance BST

TreeNode* BalanceHelper(int arr[],int low,int high){
    if(low>high) return NULL;
    int mid = (low+high)/2;
    TreeNode* root = (TreeNode *)malloc(sizeof(TreeNode));
    root->val = arr[mid];
    root->left = BalanceHelper(arr,low,mid-1);
    root->right = BalanceHelper(arr,mid+1,high);
    return root;
}

TreeNode* BalanceBST(TreeNode* root){
    int arr[5];
    Inorder(root,arr);
    int size = sizeof(arr) / sizeof(arr[0]);
    return BalanceHelper(arr,0,size);
}