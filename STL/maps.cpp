#include <iostream>
#include <map>
#include<sstream>
using namespace std;

int main() {
    string sentence="Sung jin Woo Esdeath Cha hae in";
    map<string,int> freq;
    stringstream ss(sentence);
    string word;
    while(ss>>word){
        freq[word]++;
    }
    //word frequency
    for(auto pair:freq){
        cout<<pair.first<<" => "<<pair.second<<endl;
    }
    return 0;

}
   