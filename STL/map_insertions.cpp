#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> mp;
    
    // Insertions
    mp["A"] = 10;
    mp.insert({"B", 30});
    mp.insert({"A", 40}); // Won't change A, already exists
    mp["Admin"] = 54;
    mp["Zakir"] = 20;
    mp["Zovi"] = 10;
    mp["Three"] = 3;
    mp["Two"] = 2;
    mp["One"] = 1;
    
    // Erase all keys starting with 'Z'
    for(auto it = mp.begin(); it != mp.end(); ){
        if(it->first[0] == 'Z'){
            it = mp.erase(it);
        } else {
            ++it;
        }
    }
    
    // Check for Admin using find()
    auto it = mp.find("Admin");
    if(it != mp.end()){
        cout << "Admin Level: " << it->second << endl;
    } else {
        cout << "Admin not found!" << endl;
    }
    
    // Print map (it will be sorted by key)
    cout << "\nFinal Map:\n";
    for(auto pair : mp){
        cout << pair.first << " -> " << pair.second << endl;
    }
    
    return 0;
}
