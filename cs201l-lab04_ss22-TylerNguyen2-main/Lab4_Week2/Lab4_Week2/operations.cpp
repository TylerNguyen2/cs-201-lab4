#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm> 
#include "operations.h"

using namespace std;

vector<vector<int>> generateMatrix() {
	int r, c;
	cout << "Enter the number of rows: " << endl;
	cin >> r;
	cout <<  endl;

	cout << "Enter the number of collums: " << endl;
	cin >> c;
	cout << endl;

	cout << "Enter all the values: " << endl;
	return createVector(r,c);

}

vector<vector<int>> createVector(int nr, int nc) {
	vector<vector<int>> nV;

	nV.resize(nr);

	for (unsigned int i = 0; i < nr; i++) {
		nV.at(i).resize(nc);
		for (unsigned int j = 0; j < nc; j++) {
			cin >> nV.at(i).at(j);
		}

	}

	return nV;
}

void displayMatrix(vector<vector<int>> nV) {
	int nr, nc;
	nr = nV.size();
	nc = nV.at(0).size();

	for (unsigned int i = 0; i < nr; i++) {
		for (unsigned int j = 0; j < nc; j++) {
			cout << nV[i][j] << " ";

		}
		cout << endl;
	}
}

bool canBeAdded(vector<vector<int>> a, vector<vector<int>> b) {
	if (a.size() == b.size() && a.at(0).size() == b.at(0).size()) {
		return true;
	}
	else {
		return false;
	}

}

bool canBeMult(vector<vector<int>> a, vector<vector<int>> b) {
	if (a.at(0).size() == b.size()) {
		return true;
	}
	else {
		return false;
	}

}

//nr = nV.size();
//nc = nV.at(0).size();

void addMatrix(vector<vector<int>> a, vector<vector<int>> b) {
	int ar, ac, br, bc;
	ar = a.size();
	ac = a.at(0).size();
	br = b.size();
	bc = b.at(0).size();

	for (unsigned int i = 0; i < ar; i++) {
		for (unsigned int j = 0; j < ac; j++) {
			cout << a[i][j] + b[i][j] << " ";

		}
		cout << endl;
	}
}

void multMatrix(vector<vector<int>> a, vector<vector<int>> b) {
	int ar, ac, br, bc;
	const int r1 = 2;
	const int c2 = 2;
	ar = a.size();
	ac = a.at(0).size();
	br = b.size();
	bc = b.at(0).size();
	int result[r1][c2];
	

	for (int i = 0; i < ar; i++) {
		for (int j = 0; j < bc; j++) {
			result[i][j] = 0;

			for (int k = 0; k < ac; k++) {
				result[i][j] += a[i][k] * b[k][j];

				//cout << a[i][k] * b[k][j] << " ";
			}

		}
	}
		for (int i = 0; i < ar; i++) {
			for (int j = 0; j < bc; j++) {
				cout << result[i][j] << " ";
			}
			cout << endl;
		}
		
	

}
