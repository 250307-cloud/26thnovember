#include <iostream>
using namespace std;

int main(){
    int n, altitude, max;
    int results[n];
    altitude, max = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> results[i];
        altitude += results[i];
        if (max < altitude){
            max = altitude;
        }
    }
    
    cout << max;
    
    return 0;
}
