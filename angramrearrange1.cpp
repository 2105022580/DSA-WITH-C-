
#include <iostream>
#include <string>

using namespace std;

void reverse(string str[], int n) {
    int st = 0, end = n - 1;
    while (st < end) {
        swap(str[st++], str[end--]);
    }
    // Print the reversed string
    for(int i = 0; i < n; i++) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    string str[] = {"b", "a", "n", "k"};  // Use an array of strings to represent characters
    int n = sizeof(str) / sizeof(str[0]);  // Calculate the number of elements in the array
    reverse(str, n);  // Pass the correct number of elements
    return 0;
}
