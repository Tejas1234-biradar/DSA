#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int rows;
    srand(time(0));   // Initialize random seed

    cout << "Enter the number of rows: ";
    cin >> rows;

    vector<vector<int>> matrix;     // Correct: 2D vector

    // Input Jagged Matrix
    for (int i = 0; i < rows; i++) {
        int cols = rand() % 5 + 1;   // Random column size between 1 and 5
        cout << "Row " << i + 1 << " has " << cols << " elements.\n";

        vector<int> row;
        for (int j = 0; j < cols; j++) {
            int num;
            cin >> num;
            row.push_back(num);
        }
        matrix.push_back(row);
    }

    int X, Y;
    cout << "Enter X (sum limit): ";
    cin >> X;
    cout << "Enter Y (multiple to delete): ";
    cin >> Y;

    // Remove rows whose sum > X
    for (auto it = matrix.begin(); it != matrix.end(); ) {
        int row_sum = 0;
        for (auto val : *it) row_sum += val;

        if (row_sum > X) {
            it = matrix.erase(it);
        } else {
            ++it;
        }
    }

    // Remove elements that are multiples of Y
    for (auto& row : matrix) {  // Use & to modify the row directly
        for (auto it = row.begin(); it != row.end(); ) {
            if (*it % Y == 0) {
                it = row.erase(it);
            } else {
                ++it;
            }
        }
    }

    // Print the final matrix
    cout << "\nFinal Matrix:\n";
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
