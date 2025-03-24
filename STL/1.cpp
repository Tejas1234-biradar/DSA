#include<vector>
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    vector<vector<int>> matrix;
    int rows,cols,n;
    srand(time(0));
    cout<<"Enter number of rows";
    cin>>n;
    for (int i = 0; i < n; i++)//genrating row vector to take elements in a row
    {
        vector<int> row;
        cols=rand()%5+1;//genrates a random int in 1 to 5
        cout<<"Row "<<i+1<<"has "<<cols<<"elements"<<endl;//printing the exact number of elements in a row
        for (int j = 0; j < cols; j++)//adding the row elements individually
        {
            int num;
            cin>>num;
            row.push_back(num);
        }
        matrix.push_back(row);//pushing a whole vector here seems dope
        
    }
    int x,y;
    cout<<"Enter X(delete when row_sum>X)";
    cin>>x;
    cout<<"Enter Y(delete when row's element is divisible by Y)";
    cin>>y;
    //writing the logic for X
    for(auto it=matrix.begin();it!=matrix.end();){
        int row_sum=0;
        for(auto val:*it) row_sum=row_sum+val;//looping a for loop to add the rows elements didnt know we could writie a for loop in one line
        if(row_sum>x){
            it=matrix.erase(it);//moving to the next iterator ig deleting the current one
        }
        else{
            ++it;//incrementing
        }
    }
    //writing logic for Y
    for(auto& row:matrix){//looping each row in matrix
        for(auto it=row.begin();it!=row.end();){//looping each element in a single row
            if(*it%y==0){
                it=row.erase(it);//removing if *it which is the element at which iterator is pointing is divisible by Y
            }
            else{
                ++it;
            }
        }
    }
    for(auto& row:matrix){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    
}
