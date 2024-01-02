/*#include <iostream>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        return max(
            val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}
int main() {
    int W, n;

    cout << "Enter the knapsack capacity (W): ";
    cin >> W;

    cout << "Enter the number of items (n): ";
    cin >> n;

    int profit[n], weight[n];

    cout << "Enter the profits of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> profit[i];
    }

    cout << "Enter the weights of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    cout << "Maximum value in the knapsack: " << knapSack(W, weight, profit, n) << endl;

    return 0;
}*/
