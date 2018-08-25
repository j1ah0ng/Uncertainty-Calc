// Uncertainty-Calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	vector<string> input_sorted;	//variable setup
	string input;

	cout << "Enter a uncertainty operation:\n" << "how to use goes here\n";
	getline(cin, input);

	istringstream sort(input);

	for (string input; sort >> input;) { //sort string into parts
		input_sorted.push_back(input);
	}

	/*
		Array indices 0,2,4,6 are integers. Indices 1, 5 
		are filler. Indice 3 is the operation index.
	*/

	for (int k = 0; input_sorted.size() > k; k++) { //debug
		cout << input_sorted[k] << endl;
	}

	cout << input << endl;
	_getch();	//prevent autoexit

	return 0;
}

int UncAdd(int v1, int u1, int v2, int u2) {
	int result;
	return result;
}

int UncSub(int v1, int u1, int v2, int u2) {
	int result;
	return result;
}

int UncMul(int v1, int u1, int v2, int u2) {
	int result;
	return result;
}

int UncDiv(int v1, int u1, int v2, int u2) {
	int result;
	return result;
}