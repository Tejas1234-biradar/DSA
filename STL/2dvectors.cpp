#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows=4,col=2;
    
    vector<vector<int>> vec(rows, vector<int>(col, 0));
    //input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>vec[i][j];
        }
        
    }
    //output
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}