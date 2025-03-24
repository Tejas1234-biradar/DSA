#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int>> matrix;
// Add rows dynamically
matrix.push_back({1, 2, 3});
matrix.push_back({4, 5});
matrix.push_back({6});
matrix.erase(matrix.begin()+1);
matrix[2].erase(matrix[2].begin());//2n element of 3rd row
matrix[0].resize(2);


// Output
for (auto row : matrix) {
    for (auto val : row)
        cout << val << " ";
    cout << endl;
}
return 0;
}
