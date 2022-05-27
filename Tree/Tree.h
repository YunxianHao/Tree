#include "Heap.h"
#include"Queue.h"
typedef char BTDataType;
 
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;
 
//The binary tree is constructed through the array "ABD##E#H##CF##G##"
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
// Binary tree destruction
void BinaryTreeDestory(BTNode** root);
//Number of binary tree nodes
int BinaryTreeSize(BTNode* root);
// Number of leaf nodes of binary tree
int BinaryTreeLeafSize(BTNode* root);
// Number of nodes in the k-th layer of binary tree
int BinaryTreeLevelKSize(BTNode* root, int k);
// Binary tree finds nodes with value x
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
// PreOrder 
void BinaryTreePrevOrder(BTNode* root);
// InOreder
void BinaryTreeInOrder(BTNode* root);
// PostOrder
void BinaryTreePostOrder(BTNode* root);
// level traversal
void BinaryTreeLevelOrder(BTNode* root);
// Judge whether a binary tree is a complete binary tree
int BinaryTreeComplete(BTNode* root);
