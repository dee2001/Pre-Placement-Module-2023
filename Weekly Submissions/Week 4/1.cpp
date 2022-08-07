#include <iostream>
#include <vector>
using namespace std;

int kadane_algo(vector<int> &arr){    // finds maximum sum subarray i.e kadane's algo
    int max_sum = -9999;
    int sum = 0;
    for (int i : arr){
        sum += i;
        if(sum > max_sum){
            max_sum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return max_sum;
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);            // user input vector
    for(int i = 0; i<n; i++) cin >> arr[i];
    cout << kadane_algo(arr);
    return 0;
}
