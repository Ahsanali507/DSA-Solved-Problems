//#include<iostream>
//using namespace std;
//
//const int size = 10;         // size of array
//int a[size];                 // array of 10 integers
//int cursize = 0;             // cursize is 0 because no element in heap
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
//	return (i-1)/2;
//}
//
//void insertelement(int val) {
//	a[cursize] = val;         // for 1st element a[0]=val   newelement aa jaye ga zero index per q k cursize=0 hai abhi
//
//	int new_pos = cursize;    // new position is cursize which now equal to zero
//	cursize++;                // increment the cursize to keep the count of values
//
//	while (new_pos != 0 && a[new_pos] > a[parent(new_pos)]) {   // jb tk newpostion 0 tk nhi jati and jb tk newelement apne parent se greater hai unko swap krte raho or new position ko parent ki position dete jao
//		swap(a[new_pos], a[parent(new_pos)]);
//
//		new_pos = parent(new_pos);
//	}
//}
//
//int main() {
//	insertelement(6);
//	insertelement(8);
//	insertelement(1);
//	insertelement(4);
//	insertelement(7);
//	insertelement(3);
//	insertelement(5);
//	insertelement(0);
//	insertelement(9);
//	insertelement(2);
//
//	for (int i = 0;i < size;i++) {
//		cout << a[i] << " ";
//	}
//
//	return 0;
//}