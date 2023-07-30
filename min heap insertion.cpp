//#include<iostream>
//using namespace std;
//
//const int SIZE = 10;         // size of array
//int A[SIZE];                 // array of 10 integers
//int curSize = 0;             // curSize is 0 because no element in heap
//
//// for left children of any element
//int left(int i) {
//	return (2 * i + 1);
//}
//
//// for right children of any element
//int right(int i) {
//	return (2 * i + 2);
//}
//
//// for parent of any element
//int parent(int i) {
//	return (i - 1) / 2;
//}
//
//void insertElement(int val) {
//	A[curSize] = val;         // for 1st element A[0]=val   newElement aa jaye ga zero index per q k curSize=0 hai abhi
//
//	int new_pos = curSize;    // new position is curSize which now equal to zero
//	curSize++;                // increment the curSize to keep the count of values
//
//	while (new_pos != 0 && A[new_pos] < A[parent(new_pos)]) {   // jb tk newpostion(minimum element) 0 tk nhi jati and jb tk newelement apne parent se less hai unko swap krte raho or new position ko parent ki position dete jao
//		swap(A[new_pos], A[parent(new_pos)]);
//
//		new_pos = parent(new_pos);
//	}
//}
//
//int main() {
//	insertElement(6);
//	insertElement(8);
//	insertElement(1);
//	insertElement(4);
//	insertElement(7);
//	insertElement(3);
//	insertElement(5);
//	insertElement(0);
//	insertElement(9);
//	insertElement(2);
//
//	for (int i = 0;i < SIZE;i++) {
//		cout << A[i] << " ";
//	}
//
//	return 0;
//}