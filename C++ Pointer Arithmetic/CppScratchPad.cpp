#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

// -------------------------------------- C++ Pointer Arithmetic -------------------------------------------------
// ref link:https://www.youtube.com/watch?v=7_0tXnn9zBk&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1&index=3




























// ---------------------------------- C++ Pointers Video 2 --------------------------------------------------
// ref link:https://www.youtube.com/watch?v=DSeBneAyDx4&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1&index=2

// pointer is just an address

//int programImageVariable;
//
//void main()
//{
//	int variable1 = 5;
//	int variable2 = 10;
//	int* pointer1 = &variable1;
//	int* pointer2 = &variable1;
//
//	cout << *pointer1 << endl;		// 5
//	cout << *pointer2 << endl;		// 5
//
//	pointer2 = &variable2;
//	cout << *pointer2 << endl;		// 10
//
//	*pointer2 = 23;
//	cout << *pointer2 << endl;		// 23
//	cout << variable2 << endl;		// 23
//
//	pointer1 = pointer2;
//	cout << *pointer1 << endl;		// 23
//
//	pointer1 = &programImageVariable;
//}



















// ----------------------------------- C++ Pointers Introduction --------------------------------------------
// ref link:https://www.youtube.com/watch?v=lAHgavXXWXM&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1

// C++ predecessor to java and C#

//void main() // functions
//{
//	int myVar = 23; // store in the memory stack
//	int *myPointer = &myVar;		// & - means what is the address of
//	//int yourInt, * yourIntPointer;
//	//int* myPointer;
//	
//	// myPointer ---> myVar
//	cout << myPointer << endl;    // 00000066DE56FC14 - address of myVar;
//	cout << (*myPointer) << endl;		// output value: 23
//	(*myPointer) = 15;
//	cout << myVar << endl;			// output modified value: 15
//}
