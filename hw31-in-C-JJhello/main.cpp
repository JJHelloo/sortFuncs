/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw3_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw3_1.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw3_1.cpp
 * Abstract: read the input values from the user. After that, your program
should display them in the ascending order.
 * Name: Justin Johnson
 * Date: 11/11/2022
 */

#include <iostream>
#include <algorithm>
using namespace std;

// function declare
void sort(int arr[], int num);
void transNums(int arr[], int num);

int main() {
	int num = 0;
	cin >> num;
	int arr[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	transNums(arr, num);

	return 0;
}

// sort array in acedeing order
void sort(int arr[], int num) {
	int temp;
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
//
void transNums(int arr[], int num) {
	// call function to sort array
	sort(arr, num);
	// run through array
	for (int i = 0; i < num; i++) {
		// if at index i = i+1 output the arr[i]
		if (arr[i] + 1 == arr[i + 1]) {
			cout << arr[i] << "-";
			// move up the index for as long as i = i+1
			while (arr[i] + 1 == arr[i + 1]) {
				i++;
			}
			i--; // move index back by one to get the last consecutive number
		} else { 
			if (i < num - 1) // output a space if we are not at the end of the array
				cout << arr[i] << " ";
			else // no space for end of array
				cout << arr[i];
		} // end of first else 
	} // end of for loop
	cout << endl;
}
