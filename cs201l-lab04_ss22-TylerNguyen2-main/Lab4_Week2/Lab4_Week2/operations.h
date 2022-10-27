#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm> 


using namespace std;

vector<vector<int>> generateMatrix();
vector<vector<int>> createVector(int r, int c);
void displayMatrix(vector<vector<int>> nV);

bool canBeAdded(vector<vector<int>> a, vector<vector<int>> b);

bool canBeMult(vector<vector<int>> a, vector<vector<int>> b);


void addMatrix(vector<vector<int>> a, vector<vector<int>> b);

void multMatrix(vector<vector<int>> a, vector<vector<int>> b);

