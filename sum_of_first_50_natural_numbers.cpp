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
    for (int i = 1; i <= 50; i++)
        sum += i;
    cout << "Sum using loop: " << sum << endl;
    int n = 50;
    int formulaSum = n * (n + 1) / 2;
    cout << "Sum using formula: " << formulaSum << endl;
    return 0;
}
