//#include <iostream>
//#include <fstream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//// Student info
//class Student {
//	int stdId; //student identifier (unique) 
//	string name; //student name 
//	float fee; //student fee
//	Student* left;                                   // holds left ref of node element
//	Student* right;                                  // holds right ref of node element
//public:
//	Student(int id,string nm,float f, Student* l, Student* r) {    // parametrized constructor for Students's id,name,fee,left ref and right ref
//		this->stdId = id;
//		this->name = nm;
//		this->fee = f;
//		this->left = l;
//		this->right = r;
//	}
//
//	friend class StudentBST;                            // members of class Student becomes public for StudentBST class
//};
//
//// StudentBST
//class StudentBST {
//	Student* root;                                  // holds first node if tree
//
//	// working horse inOrder traversal of StudentBST
//	void inOrder(Student* root) {
//		if (root != NULL) {
//			inOrder(root->left);                // left-sub-tree traverse
//			cout << root->stdId << "  "<<root->name<<"  "<<root->fee<<endl;          // display the student
//			inOrder(root->right);               // right-sub-tree traverse
//		}
//	}
//
//	// working horse preOrder traversal of StudentBST
//	void preOrder(Student* root) {
//		if (root != NULL) {
//			cout << root->stdId << "  " << root->name << "  " << root->fee << endl;          // display the student
//			preOrder(root->left);                // left-sub-tree traverse
//			preOrder(root->right);               // right-sub-tree traverse
//		}
//	}
//
//	// working horse PostOrder traversal of StudentBST
//	void PostOrder(Student* root) {
//		if (root != NULL) {
//			PostOrder(root->left);                // left-sub-tree traverse
//			PostOrder(root->right);               // right-sub-tree traverse
//			cout << root->stdId << "  " << root->name << "  " << root->fee << endl;          // display the student
//		}
//	}
//
//	
//
//public:
//	StudentBST() {
//		root = NULL;                   // initially the tree is empty
//	}
//
//	bool isEmpty() {
//		return !root;                  // if tree is empty
//	}
//
//	void insert(int id,string nm,float f) {
//		Student* newNode = new Student(id,nm,f, NULL, NULL); // newNode
//			Student* curNode = root;                       // curNode holds root node of tree
//			Student* preNode = NULL;                       // preNode is null because root node has no predecessor
//
//			while (curNode != NULL) {                   // ab curNode me 6 hai so ab ye null nhi hai
//				preNode = curNode;                      // to curNode assign krdo preNode ko
//
//				if (id < curNode->stdId) {     // agr data jo aya hai wo curNode jo k 6 hai agr us se less hai to
//					curNode = curNode->left;    // curNode ko left me move krwa do
//				}
//				else {
//					curNode = curNode->right;   // wgerna curNode ko right me move krwa do
//				}
//			}
//
//			if (preNode == NULL) {                      // agr preNode null hai mtlb ye first node hai
//				root = newNode;                         // to root me newNode rkh do
//			}
//			else if (preNode->stdId > id) {            // ab hmara preNode null hi hai so agr jo data aya hai wo chota hai preNode me pre data se to
//				//if(search(id)==false){
//				//	preNode->left = newNode;                // preNode k left me newNode rkhwa do
//				//	return true;
//				//}
//				//else {
//				//	cout << "Student with this id already present " << endl;
//				//	return false;
//				//}
//				preNode->left = newNode;
//			}
//			else {
//				//if (search(id) == false) {
//				//	preNode->right = newNode;               // wgerna preNode k right me newNode rkhwa do
//				//	return true;
//				//}
//				//else {
//				//	cout << "Student with this id already present " << endl;
//				//	return false;
//				//}
//				preNode->right = newNode;
//			}
//	}   
//
//
//	// inorder traversal function
//	void inOrder() {
//		inOrder(root);
//	}
//
//	// preOrder traversal function
//	void preOrder() {
//		preOrder(root);
//	}
//
//	// PostOrder traversal function
//	void PostOrder() {
//		PostOrder(root);
//	}
//
//	void Delete() {
//		Delete(root);
//	}
//
//	//search particular student
//	bool search(int id) {
//		Student* curNode = root;                       // curNode holds root node of tree
//		Student* preNode = NULL;
//
//		while (curNode != NULL) {                   // ab curNode me 6 hai so ab ye null nhi hai
//			preNode = curNode;                      // to curNode assign krdo preNode ko
//
//			if (id < curNode->stdId) {     // agr data jo aya hai wo curNode jo k 6 hai agr us se less hai to
//				curNode = curNode->left;    // curNode ko left me move krwa do
//				if (id == curNode->stdId) {
//					cout << "Id of student: " << curNode->stdId << ", name of student: " << curNode->name << " and fee of student: " << curNode->fee << endl;
//					return true;
//				}
//				else {
//					cout << "student with this id not found" << endl;
//					return false;
//				}
//			}
//			else {
//				curNode = curNode->right;   // wgerna curNode ko right me move krwa do
//				if (id == curNode->stdId) {
//					cout << "Id of student: " << curNode->stdId << ", name of student: " << curNode->name << " and fee of student: " << curNode->fee << endl;
//					return true;
//				}
//				else {
//					cout << "student with this id not found" << endl;
//					return false;
//				}
//			}
//		}
//	}
//
//	//delete student
//	Student* Delete(Student* root,int id) {
//		if (root == NULL) {
//			return root;
//		}
//		else if(id<root->stdId) {
//			root->left = Delete(root->left, id);
//		}
//		else if (id > root->stdId) {
//			root->right = Delete(root->right, id);
//		}
//		else {
//			if (root->left == NULL) {
//				return root->right;
//			}
//			else if (root->right == NULL) {
//				return root->left;
//			}
//			else {
//				Student* successor = root->right;
//				while (successor->left != NULL) {
//					successor = successor->left;
//				}
//				root->stdId = successor->stdId;
//				root->right = Delete(root->right, successor->stdId);
//			}
//		}
//		return root;
//	}
//
//	//destroy
//	void destroy(Student* st) {
//		if (st != NULL) {
//			destroy(st->left);
//			destroy(st->right);
//			delete st;
//		}
//	}
//
//	//destructor
//	~StudentBST() {
//		destroy(root);
//	}
//	
//};
//
//int main() {
//	StudentBST obj;
//
//	if (obj.isEmpty() == true) {
//		cout << "No student exists" << endl;
//	}
//	else {
//		cout << "Some students exist" << endl;
//	}
//
//	
//	ifstream file("input.txt");
//	if (file.is_open())
//	{
//		while (!file.eof()){
//			int id;
//			string name;
//			float fee;
//			file >> id >> name >> fee;
//			
//			
//			//cout << sid << "  " << name << "  " << sfee << endl;
//			obj.insert(id, name, fee);
//		}
//
//		file.close();
//
//	}
//
//	else {
//		cout << "Given file does not exists"<<endl;
//	}
//
//
//	if (obj.isEmpty() == true) {
//		cout << " No student exists" << endl;
//	}
//	else {
//		cout << "Some students exists" << endl;
//	}
//
//	cout << "The details of students by inOrder traversal are: "<<endl;
//	obj.inOrder();
//
//	cout << endl;
//
//	cout << "The details of students by preOrder traversal are: " << endl;
//	obj.preOrder();
//
//	cout << endl;
//
//	cout << "The details of students by PostOrder traversal are: " << endl;
//	obj.PostOrder();
//
//	cout << endl;
//
//	cout << obj.search(11);
//
//	obj.Delete(2);
//
//	//obj.destroy()
//
//	system("pause");
//
//	return 0;
//}