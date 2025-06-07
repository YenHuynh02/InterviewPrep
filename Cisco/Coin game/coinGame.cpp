#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> outcome(n);
    for (int i = 0; i < n; i++) {
        cin >> outcome[i];
    }

    int current_sum = 0;
    int min_balance = 0;
    for (int i = 0; i < n; ++i) {
        current_sum += outcome[i];
        if (current_sum < min_balance) {
            min_balance = current_sum;
        }
    }

    int min_start = -min_balance;
    cout << min_start << endl;

    return 0;
}