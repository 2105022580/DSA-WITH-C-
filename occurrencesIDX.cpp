#include<iostream>
#include<vector>
using namespace std;

int occuridx(vector<int> arr, int i, int key) {
    if (i == arr.size()) {
        return -1; // Base case: end of array
    }
    if (arr[i] == key) {
        cout << i << endl; // Print index if key is found
    }
    occuridx(arr, i + 1, key); // Recurse for next index
    return 0; // Return 0 after processing all elements
}

int main() {
    vector<int> arr = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int key = 2;
    occuridx(arr, 0, key);
    return 0;
}