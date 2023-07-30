//#include<iostream>
//using namespace std;
//
//class Node {
//	int data;                     // holds data
//	Node* next;                   // holds ref of next node
//public:
//	Node(int dt, Node* nxt) {
//		this->data = dt;
//		this->next = nxt;
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
//		Node* newNode = new Node(data, NULL);      // new node is created
//		if (head == NULL) {
//			head = newNode;                        // agr head null hai mtlb list empty hai to head me newNode rkh do
//			newNode->next = head;                  // or newNode k next me head rkh do
//		}
//		else {
//			Node* curNode = head;                  // agr list empty na hui mtlb us me atleast one node pra hai
//			while (curNode->next != head) {        // so jb tk curNode k next me head nhi ajata
//				curNode = curNode->next;           // tb tk curNode jo k head tha wo next next hota jaye
//			}
//			newNode->next = head;                  // jb condition false ho jaye tb newNode k next me head rkh do 
//			curNode->next = newNode;               // or curNode ab jo k last node hoga us k next me newNode rkh do
//			head = newNode;                        // or ab head newNode hoga
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
//			} while (curNode != head);
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