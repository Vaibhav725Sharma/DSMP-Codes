#include<iostream>
#include <vector> 
using namespace std;


// Global variable declaration
int sum = 0;


void SubSequence(int arr[], int index, int n, vector<vector<int>>& ans, vector<int> temp) {
    // Base case: when we've processed all elements
    if(index == n) {
        ans.push_back(temp);  // Add the current subsequence to the answer
        return;
    }

    // Exclude the current element and move to the next
    SubSequence(arr, index + 1, n, ans, temp);

    // Include the current element and move to the next
    temp.push_back(arr[index]);
    SubSequence(arr, index + 1, n, ans, temp);
}

int main() {
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;  // Vector to store subsequences
    vector<int> temp;  // Temporary vector to hold a subsequence

    // Generate all subsequences
    SubSequence(arr, 0, 3, ans, temp);

    // Print all subsequences
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
