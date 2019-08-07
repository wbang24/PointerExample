// PointerExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	/*
	the purpose of this piece of code is for me to review how pointers work in C++
	*/

	//these are two int variables
	int valueOne;
	int valueTwo;

	//this is a pointer
	int * ptr;


	int * ptr2;

	//pointing at the address/reference of 'valueOne'
	ptr = &valueOne;
	*ptr = 10; // setting whatever ptr is pointing at to 10

	ptr = &valueTwo;
	*ptr = 20; // setting whatever ptr is pointing at to 20

	cout << "the address of valeuOne is: " << &valueOne << endl;
	cout << "the address of valeuOne is: " << &valueTwo << endl;

	cout << "valueOne should be 10" << endl;
	cout << "valueOne = " << valueOne << endl;

	cout << "valueTwo should be 20" << endl;
	cout << "valueTwo = " << valueTwo << endl;

	ptr2 = &valueOne;
	
	cout << " ptr2 = &valueOne; " << endl;
	cout << "the value of ptr2 is: " << ptr2 << "... It should be an address of &valueOne" << endl;
	
	*ptr2 = 45;

	cout << "we now declared *ptr2=45" << endl;
	cout << "valueOne should be 45" << endl;
	cout << "valueOne: " << valueOne;
	
	
	return 0;
}
