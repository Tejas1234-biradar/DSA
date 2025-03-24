#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int hash[13] = {0};
    int arr[5] = {1, 2, 3, 1, 3};

    unordered_map<int, int> mpp;

    // Using unordered_map for hashing (frequency count)
    for (int i = 0; i < 5; i++) {
        mpp[arr[i]]++;
    }

    // Print frequency from the map
    for (auto pair : mpp) {
        cout << pair.first << " appeared " << pair.second << " times " << endl;
    }

    // String hashing example
    string s = "abbsbbbdf";
    int charHash[26] = {0}; // hash array for 'a' to 'z'

    // Frequency count of characters in the string
    for (int i = 0; i < s.size(); i++) {
        charHash[s[i] - 'a']++; // mapping 'a' to 0, 'b' to 1, ..., 'z' to 25
    }

    // Print character frequencies
    for (int i = 0; i < 26; i++) {
        if (charHash[i] > 0) {
            cout << char(i + 'a') << " appeared " << charHash[i] << " times" << endl;
        }
    }
}

