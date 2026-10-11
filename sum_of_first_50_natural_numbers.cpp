#include <iostream>
using namespace std;
int main() {
	/*
 * Program : Sum of First 50 Natural Numbers
 * Name    : Muhammad Faizan
 * Reg No  : L1S26BSCS0172
 * Assignment No : Assignment 1
 */
	int sum = 0;
	for (int i = 0;i <= 50;i++) {
		sum += i;
	}
	cout << "Sum of first 50 natural numbers: " << sum;
	return 0;
}