/*
 * BinaryTree.h
 *
 *  Created on: Dec 5, 2018
 *      Author: Gokul
 */

#ifndef BINARYTREE_H_
#define BINARYTREE_H_



class BinaryTree {

private:
	struct node {

		int key;
		node* left;
		node* right;

	};

	node* root;

	void AddLeafPrivate(int key, node* Ptr);


public:

	BinaryTree();
	node* CreateLeaf(int key);
	void AddLeaf(int key);

};


#endif /* BINARYTREE_H_ */
