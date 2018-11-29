//Project 2: Binary Tree
//Team 100%OnPrpject2

#ifndef Proj2_H
#define Proj2_H

#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace::std;


//***  Binary Tree class  ***//

class BinaryTree
{
protected:

	// Since the BinaryNode class is embedded in the BinaryTree
	//   class, the public data members and methods of
	//   BinaryNode are only visible within the BinaryTree class. 
	//   Client code cannot see BinaryNode object data members
	//   or methods.
	class BinaryNode
	{
	public:
		short entry_;
		BinaryNode * left_;
		BinaryNode * right_;

	public:
		BinaryNode(short entry = 0,
			BinaryNode* left = NULL,
			BinaryNode* right = NULL)
			: entry_(entry),
			left_(left),
			right_(right)
		{ }

		// NOTE: The standard BinaryNode destructor code does
		//   NOT delete BinaryNodes in the subtrees of left_ or right_.
		//   See BinaryTree destroy.
		~BinaryNode()
		{
		}

	private:
		// Disable the BinaryNode copy constructor and the assignment
		//   operator.
		BinaryNode(const BinaryNode &);
	};

private:
	string ID,
		ParentID,
		rawE,
		LHASH,
		RHASH,
		LHIST,
		RHIST;


public:
	// The no-parameter constructor creates an empty tree.
	BinaryTree();

	// The destructor deallocates all the nodes in the tree.
	~BinaryTree();


	// Mutators

	// Destroy the current BinaryTree and build a randomly
	//   shaped tree of size nodes.  Node entries are
	//   successive shorts stored in the tree in
	//   preorder.
	void build(long size);


	// Accessors

	// Display the tree.
	// The node values are listed using an inorder
	//   traversal.
	// Node values are indented by the depth of the node to
	//   display the shape of the tree.
	// The tree shape is displayed with the left subtree at
	//   the top of the screen.
	void display(std::ostream& outfile) const;

	//Insert
	void InsertNewNode(string subtree);
	void Hash();
}

//plan: Binary tree source: lab8
//keep the build and display funcs to visualize the tree
//insert functon to add a new node and update it to HIST, one prameter for user to enter 

//HASH ex: animal be the root, zimbra (left) and cat be children, extend zibra to tigar(left). tigar is the LHIST of zibra, zibra is the LHASH of animal, tigar and zibrais the LHIST of animal 
//parent id: name of parents n children ->hash
#endif // !Proj2_H

