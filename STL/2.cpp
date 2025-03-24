#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> mp;
    mp.insert({"One",1});
    mp.insert({"Two",2});
    mp.insert({"Three",3});
    mp.insert({"Zakir",20});    
    mp.insert({"Admin",22});    
    mp.insert({"Zaki",21});
    auto it=mp.find("Admin");
    if(it!=mp.end()){
        cout<<"Found Ya\n";
        cout<<it->second<<endl;
    }
    else{
        cout<<"No admin here sorry bruv\n";
    }
    for(auto rit=mp.begin();rit!=mp.end();){
        if(rit->first[0]=='Z'){//didnt know single inverted comma were to be used
            rit=mp.erase(rit);
        }
        else{
            ++rit;
        }
    } 
    for(auto pair:mp){
        cout<<pair.first<<"->"<<pair.second<<endl;
    }   
}
