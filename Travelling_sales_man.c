#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n; // Number of cities
int** cost; // Cost matrix

int factorial(int num) {
    if (num == 1 || num == 0) return 1;
    return num * factorial(num - 1);
}

void findOptimalPath(int* path, int& minCost) {
    int minPath[n];
    minCost = INT_MAX;

    int numPermutations = factorial(n);

    for (int i = 0; i < numPermutations; i++) {
        int tempCost = 0;

        std::next_permutation(path, path + n);

        for (int j = 0; j < n - 1; j++) {
            tempCost += cost[path[j]][path[j + 1]];
        }

        tempCost += cost[path[n - 1]][path[0]];

        if (tempCost < minCost) {
            minCost = tempCost;
            for (int j = 0; j < n; j++) {
                minPath[j] = path[j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        path[i] = minPath[i];
    }
}
