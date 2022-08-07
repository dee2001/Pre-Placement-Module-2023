#include <iostream>
using namespace std;

int binary(int arr[], int i, int j, int key){
    while(i<=j){
        int mid = i+(j-i)/2;
        if (arr[mid]==key) return mid;
        else if (arr[mid]<key) i = mid+1;
        else j = mid-1;
    }
    return -1;
}

int main() {
    int arr[10] = {-1,0,1,2,3,4,5,6,7,8};
    cout << binary(arr,0,9,8);
    return 0;
}
Footer
© 2022 GitHub, Inc.
