//#include<iostream>
//using namespace std;
//
//const int SIZE = 10;         // size of array
//int A[SIZE];                 // array of 10 integers
//int curSize = 0;             // curSize is 0 because no element in heap
//
//void insertElement(int val) {
//	A[curSize] = val;         // for 1st element A[0]=val   newElement aa jaye ga zero index per q k curSize=0 hai abhi
//
//	int new_pos = curSize;    // new position is curSize which now equal to zero
//	curSize++;                // increment the curSize to keep the count of values
//
//	while (new_pos != 0 && A[new_pos] > A[new_pos-1/2]) {   // jb tk newpostion 0 tk nhi jati and jb tk newelement apne parent se greater hai unko swap krte raho or new position ko parent ki position dete jao
//		swap(A[new_pos], A[new_pos-1/2]);
//
//		new_pos = new_pos-1/2;
//	}
//}
//
//void searchElement(int a[],int l,int h,int k) {
//	int mid = l + (h - l) / 2;
//	if (a[mid] == k) {
//		cout << "Element found at index: " << mid << endl;
//		//return true;
//	}
//	else if (k < a[mid]) {
//		searchElement(a, l, mid, k);
//	}
//	else if(k>a[mid]) {
//		searchElement(a, mid+1, h, k);
//	}
//	else {
//		cout << "Element not found" << endl;
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
//	searchElement(A, 0, 9, 5);
//
//	return 0;
//}