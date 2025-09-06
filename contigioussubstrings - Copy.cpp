
#include <iostream>

using namespace std;

int countValidSubstrings(string &s, int start, int end) {
    if (start == s.length()) return 0;
    if (end == s.length()) return countValidSubstrings(s, start + 1, start + 1);

    // Check current substring: s[start...end]
    int count = (s[start] == s[end]) ? 1 : 0;

    // Move to next substring ending index
    return count + countValidSubstrings(s, start, end + 1);
}

int main() {
    string s1 = "abcab";
    int result1 = countValidSubstrings(s1, 0, 0);
    cout << "Output 1 (abcab): " << result1 << endl; 
    // Output: 7
    

    string s2 = "a,ab,abc,abca,abcab,b,bc,bca,bcab,c,ca,cab,a,ab,a";
    int result2 = countValidSubstrings(s2, 0, 0);
    cout << "Output 2 (aba): " << result2 << endl; // Output: 4

    return 0;
}