#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void reverseString(char s[], int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - 1 - i]);
    }
}

int main() {
    char s[1000];
    cin >> s;

    int n = strlen(s);

    reverseString(s, n);

    cout << s;

    return 0;
}
