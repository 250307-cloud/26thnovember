#include <iostream>
using namespace std;

int main()
{
    int x, n, matches;
    cin >> n;
    int list[n];
    
    for (int i = 0; i < n; i++){
        cin >> list[i];
    }
    
    cin >> x;
    matches = 0;
    for (int i = 0; i < n; i++){
        if (list[i] == x) matches++;
    }
    
    cout << matches;
    
    return 0;
}
//I missed the part what we had to do in here for the extra, sorry :(
