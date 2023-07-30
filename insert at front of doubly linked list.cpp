//#include<iostream>
//using namespace std;
//
//class Node {
//	int data;                     // holds data
//	Node* next;                   // holds ref of next node
//	Node* prev;                   // holds ref of previous node
//public:
//	Node(int dt, Node* nxt,Node* prv) {
//		this->data = dt;
//		this->next = nxt;
//		this->prev = prv;
//	}
//
//	friend class List;            // Node class becomes public for List class
//};
//
//class List {
//public:
//	Node* head;                   // holds ref of first node 
//	List() {                      // initially list is empty
//		head = NULL;
//	}
//
//	bool isEmpty() {
//		return !head;             // if the list is empty head contains 0 (false)
//	}
//
//	void insertAtEnd(int data) {
//		Node* newNode = new Node(data, NULL,NULL);      // new node is created
//		if (head == NULL) {
//			head = newNode;                        // agr head null hai mtlb list empty hai to head me newNode rkh do
//		}
//		else {
//			Node* curNode = head;                  // agr list empty na hui mtlb us me atleast one node pra hai
//
//			newNode->next = curNode;               // newNode k next me curNode rkh do
//			curNode->prev = newNode;               // or curNode k previous me newNode rkh do
//			head = newNode;                        // ab hmara head newNode hoga
//
//		}
//	}
//
//	void traverse() {
//		if (head == NULL) {
//			cout << "The list is empty" << endl;
//		}
//		else {
//			Node* curNode = head;
//			do {
//				cout << curNode->data << "\t";
//				curNode = curNode->next;
//			} while (curNode != NULL);
//		}
//	}
//
//
//};
//
//int main() {
//	List l;
//
//	cout << l.isEmpty() << endl;                   // true 1 because now list is empty
//
//	l.insertAtEnd(55);                             // insert 55 at the end of linked list
//	l.insertAtEnd(99);                             // insert 99 at the end of linked list
//	l.insertAtEnd(100);                            // insert 100 at the end of linked list
//	l.insertAtEnd(110);                            // insert 110 at the end of linked list
//
//	//cout << l.isEmpty() << endl;                 // false 0 because now list has one node 55
//
//	l.traverse();                                  // 55 99 100 110
//
//
//	return 0;
//}