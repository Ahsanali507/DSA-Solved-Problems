//#include<iostream>
//using namespace std;
//
//// element info
//class Node {
//	int data;                                     // holds data of node
//	Node* left;                                   // holds left ref of node element
//	Node* right;                                  // holds right ref of node element
//public:
//	Node(int dt, Node* l, Node* r) {    // parametrized constructor for node's data,left ref and right ref
//		this->data = dt;
//		this->left = l;
//		this->right = r;
//	}
//
//	friend class Tree;                            // members of class Node becomes public for Tree class
//};
//
//// tree
//class Tree {
//	Node* root;                                  // holds first node if tree
//
//	// working horse traversal of tree
//	void inOrder(Node* root) {
//		if (root != NULL) {
//			inOrder(root->left);                // left-sub-tree traverse
//			cout << root->data << " ";          // display the node
//			inOrder(root->right);               // right-sub-tree traverse
//		}
//	}
//
//public:
//	Tree() {
//		root = NULL;                   // initially the tree is empty
//	}
//
//	bool isEmpty() {
//		return !root;                  // if tree is empty
//	}
//
//	void insertNode(int data) {
//		Node* newNode = new Node(data, NULL, NULL); // newNode
//
//		Node* curNode = root;                       // curNode holds root node of tree
//		Node* preNode = NULL;                       // preNode is null because root node has no predecessor
//
//		while (curNode != NULL) {                   // ab curNode me 6 hai so ab ye null nhi hai
//			preNode = curNode;                      // to curNode assign krdo preNode ko
//
//			if (data < curNode->data) {     // agr data jo aya hai wo curNode jo k 6 hai agr us se less hai to
//				curNode = curNode->left;    // curNode ko left me move krwa do
//			}
//			else {
//				curNode = curNode->right;   // wgerna curNode ko right me move krwa do
//			}
//		}
//
//		if (preNode == NULL) {                      // agr preNode null hai mtlb ye first node hai
//			root = newNode;                         // to root me newNode rkh do
//		}
//		else if (preNode->data > data) {            // ab hmara preNode null hi hai so agr jo data aya hai wo chota hai preNode me pre data se to
//			preNode->left = newNode;                // preNode k left me newNode rkhwa do
//		}
//		else{
//			preNode->right = newNode;               // wgerna preNode k right me newNode rkhwa do
//		}
//	}   
//
//
//	// traversal function
//	void inOrder() {
//		inOrder(root);
//	}
//
//	
//};
//
//int main() {
//	Tree obj;
//
//	if (obj.isEmpty() == true) {
//		cout << "The tree is empty" << endl;
//	}
//	else {
//		cout << "The tree is not empty" << endl;
//	}
//
//	obj.insertNode(6);
//	obj.insertNode(2);
//	obj.insertNode(4);
//	obj.insertNode(8);
//	obj.insertNode(5);
//	obj.insertNode(9);
//	obj.insertNode(3);
//	obj.insertNode(0);
//	obj.insertNode(7);
//
//	if (obj.isEmpty() == true) {
//		cout << "The tree is empty" << endl;
//	}
//	else {
//		cout << "The tree is not empty" << endl;
//	}
//
//	cout << "The nodes of tree are: ";
//	obj.inOrder();
//
//	cout << endl;
//
//	system("pause");
//
//	return 0;
//}