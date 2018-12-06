/*
 * BinaryTree.cpp
 *
 *  Created on: Dec 5, 2018
 *      Author: Gokul
 */

#include <iostream>
#include <cstdlib>

#include "BinaryTree.h"

using namespace std;



BinaryTree::BinaryTree() {

	root = NULL;

}

BinaryTree::node* BinaryTree::CreateLeaf(int key) {


	node* n = new node;
	n->key = key;
	n->left =  NULL;
	n->right = NULL;


	return n;

}

void BinaryTree::AddLeaf(int key) {

	AddLeafPrivate(key, root);

}

void BinaryTree::AddLeafPrivate(int key, node* Ptr) {

	if(root == NULL) {

		root = CreateLeaf(key);

	}
	else if(key < Ptr->key) {

		if(Ptr->left != NULL) {

			AddLeafPrivate(key, Ptr->left);

		}
		else {

			Ptr->left = CreateLeaf(key);

		}

	}

	else if(key > Ptr->key) {

		if(Ptr->right != NULL) {

			AddLeafPrivate(key, Ptr->right);

		}
		else {

			Ptr->right = CreateLeaf(key);

		}

	}
	else {

		cout << "The key " << key << " has already been added to the tree\n";

	}

}




