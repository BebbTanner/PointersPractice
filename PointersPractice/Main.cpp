/*
This is just a program that I am using to understand strings more.
I am not sure what else I would like to do. I remember that pointers can be used with arrays, but I am not sure how and I will have to look into it.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	int x = 10;				//X = 10
	int *ptr = &x;			//Pointer that is set to the memory address location of x.

	cout << x << endl;		//Print out the value stored in x
	cout << ptr << endl;	//Print out the pointer that is pointing to the memory address location of x.

	cout << *ptr << endl;	//This dereferances the pointer, so this will print out the value of x instead of the memory address location.

	return 0;

}