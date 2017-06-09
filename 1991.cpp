/*
 * 1991.cpp
 *
 *  Created on: 2017. 6. 9.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

class Node{
public:
	char data;
	Node* left;
	Node* right;

public:
	Node(char data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

class Tree{
public:
	Node* root;

public:
	Tree();
	void insertNode(char d, char l, char r);
	void finding(Node* root, char d, char l ,char r);
	void preorder(Node* root);
	void inorder(Node* root);
	void postorder(Node* root);
};

Tree::Tree(){
	root = NULL;
}

void Tree::insertNode(char d, char l, char r){

	if(root == NULL){
		if(d!='.') root = new Node(d);
		if(l!='.') root->left = new Node(l);
		if(r!='.') root->right = new Node(r);

	}else{
		finding(root, d, l ,r);
	}

}
void Tree::finding(Node* root, char d, char l ,char r){

	if(root==NULL) return;

	else if(root->data == d){
		if(l!='.') root->left = new Node(l);
		if(r!='.') root->right = new Node(r);
	}
	else{
		finding(root->left, d, l, r);
		finding(root->right, d, l, r);
	}
}
void Tree::preorder(Node* root){
	cout<<root->data;
	if(root->left != NULL) preorder(root->left);
	if(root->right != NULL) preorder(root->right);
}
void Tree::inorder(Node* root){
	if(root->left != NULL) inorder(root->left);
	cout<<root->data;
	if(root->right != NULL) inorder(root->right);
}
void Tree::postorder(Node* root){
	if(root->left != NULL) postorder(root->left);
	if(root->right != NULL) postorder(root->right);
	cout<<root->data;
}

int main(){

	int N;
	Tree tree;
	cin >> N;

	for(int i=0; i<N; i++){

		char d, l, r;
		cin >> d >> l >> r;

		tree.insertNode(d, l , r);
	}

	tree.preorder(tree.root);
	cout<<endl;
	tree.inorder(tree.root);
	cout<<endl;
	tree.postorder(tree.root);
	cout<<endl;


	return 0;
}


