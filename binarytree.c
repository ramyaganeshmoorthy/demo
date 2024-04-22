#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node* left;
    struct node* right;
};

struct node* createNode(int val){

}


void main(){
    int arr={2,3,1,4,8,5};
    struct node* root= malloc(sizeof(struct node));
    root->val=10;
    root->left=NULL;
    root->right=NULL;  
    
}