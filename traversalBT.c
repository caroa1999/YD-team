#include <stdio.h>
#include <stdlib.h>
#include "traversalBT.h"

// data를 루트 노드로 하여 왼쪽 서브트리와 오른쪽 서브 트리를 연결하는 연산
treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

// 이진 트리에 대한 전위 순회 연산
void preorder(treeNode* root) {
	if (root) {
		printf("%c", root->data);	// 작업 D
		preorder(root->left);		// 작업 L
		preorder(root->right);		// 작업 R
	}
}

// 이진 트리에 대한 중위 순회 연산
void inorder(treeNode* root) {
	if (root) {
		inorder(root->left);		// 작업 L
		printf("%c", root->data);	// 작업 D
		inorder(root->right);		// 작업 R
	}
}

// 이진 트리에 대한 후위 순회 연산
void postorder(treeNode* root) {
	if (root) {
		postorder(root->left);		// 작업 L
		postorder(root->right);		// 작업 R
		printf("%c", root->data);	// 작업 D
	}
}