#include <iostream>
using namespace std;

void shuffle(int nums[], int n, int result[]){
    int t;
    for (int i = 0; i < n; i++){
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[n + i];
    }
    
}

int main(){
    int n;
    cin >> n;
    int nums[2 * n], result[2 * n];
    
    for (int i = 0; i < 2 * n; i++){
        cin >> nums[i];
    }
    
    shuffle(nums, n, result);
    for (int i = 0; i < 2 * n; i++){
        cout << result[i] << " ";
    }
    
    return 0;
}
