
//* Usage: Modified
//* Title : Arrays & Pointers II
//* Author : www.usna.edu                                 
//* Date : 2022
//* Code version : Unkonwn
//* Availability : https://www.usna.edu/Users/cs/choi/ic210/lec/l20/TE2.html

#include <iostream>
using namespace std;


int* getarray(int N, int x);

int main()
{
	getarray(10, 4);

	return 0;
}

int* getarray(int N, int x)
{
	int* A = new int[N]; // The array

	// 
	for (int i = 0; i < N; i++)

		A[i] = x;



	return A;  // Return pointer to array
}