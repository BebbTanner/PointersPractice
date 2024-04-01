/*
This is just a program that I am using to understand strings more.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	int x = 10;				//X = 10
	int* ptr = &x;			//Pointer that is set to the memory address location of x.

	cout << x << endl;		//Print out the value stored in x
	cout << ptr << endl;	//Print out the pointer that is pointing to the memory address location of x. 

	return 0;

}