#include <iostream>
#include <climits> // for INT_MIN
using namespace std;
void maxsubmaxsum(int *arr,int n){// shortcut methoed
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            currsum += arr[end];
            maxsum= max(maxsum,currsum);
        }
    }
}

void printmaxsubarraysum(int arr[], int n) {
    int maxsum = INT_MIN;

    // Loop through all possible starting points
    for (int start = 0; start < n; start++) {
        // Loop through all possible ending points
        for (int end = start; end < n; end++) {
            int currsum = 0; // Reset currsum for each subarray

            // Calculate the sum of the current subarray
            for (int i = start; i <= end; i++) {
                currsum += arr[i]; // Correctly update currsum 
            }

            // Update maxsum if currsum is greater
            maxsum = max(maxsum, currsum);
        }
    }
    
    // Output the maximum subarray sum
    cout << "Maximum subarray sum: " << maxsum << endl;
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    printmaxsubarraysum(arr, n);
    maxsubmaxsum(arr,n);

    return 0;
}
