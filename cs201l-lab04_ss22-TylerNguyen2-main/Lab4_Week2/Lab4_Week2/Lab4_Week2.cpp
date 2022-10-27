// Lab4_Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm> 
#include "operations.h"

using namespace std;

int main()
{
    
    vector<vector<int>> v1;
    vector<vector<int>> v2;
    vector<vector<int>> add;
    vector<vector<int>> mul;
    vector<vector<int>> sum;
    char choice = 'y';

    while (choice != 'Q') {
        cout << "\t enter Matrix v1" << endl;
        v1 = generateMatrix();
        cout << "Matrix v1: " << endl;
        displayMatrix(v1);

        cout << "\t enter Matrix v2" << endl;
        v2 = generateMatrix();
        cout << "Matrix v2: " << endl;
        displayMatrix(v2);


        if (canBeAdded(v1, v2)) {
            cout << "v1 and v2 can be added " << endl;
            cout << "v1 + v2 is \n";
            addMatrix(v1, v2);

        }
        else {
            cout << "v1 and v2 cant be added " << endl;
        }

        if (canBeMult(v1, v2)) {
            cout << "v1 and v2 can be multiplyed " << endl;
            cout << "v1 * v2 is \n";
            multMatrix(v1, v2);
        }
        else {
            cout << "v1 and v2 cant be multiplyed " << endl;
        }
        cout << "Press Q to quit, any other key to do another grid" << endl;
        cin >> choice;
        if (choice == 'Q') {
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}

