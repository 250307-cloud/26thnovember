#include <iostream>
using namespace std;

int main() {
    int x, n, low, high, mid;

    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> x;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (nums[mid] == x) {
            cout << mid;
            return 0;
        }
        else if (nums[mid] > x) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << -1;

    return 0;
}
