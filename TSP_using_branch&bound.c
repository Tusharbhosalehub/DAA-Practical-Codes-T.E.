#include <iostream>
#include <algorithm>
using namespace std;

const int N = 4;
const int INF = 1e9; // A large value to represent infinity

int distanceMatrix[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};
