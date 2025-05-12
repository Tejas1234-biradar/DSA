#include<iostream>
#include<stack>
using namespace std;
string reverseWord(string s){
    string word="";//declaring the word variable this is our current word
    stack<string> st;//stack to store words 
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]==' ')
        {//loop to check for space if space we push the word if not we move to next char and add it to word string 
        if(!word.empty()){
        st.push(word);
        word="";//why reinitialize? next word after space
        }
        }
        else word+=s[i];
    }
    if(!word.empty()){
        st.push(word);
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
        if(!st.empty())ans+=" ";//add a space after adding every word 
    }
    return ans;
}
string largestOddNumber(string num){
    string ans="";
    //we have to check whether the last digit in the string is an odd number if it is then we have to return that as the asnwer 
    //my approach is we use a reverse loop using num.liinght and we pop the last digit that is not an odd number 
    int n=num.length();
    for(int i=n-1;i>=0;i--){
        if((num[i]-'0')%2!=0){
            //0 has an ascii  value of 48 and say a number like '1' has an ascii value of 49 so by subtracting 1 we get the actual int value without using typecasting
        ans=num.substr(0,i+1);//35427 7 has lenght 4 and we a i+1 to avutally reavh the number
            break;
        }
    }
    return ans;
}
string longestCommonPrefix(vector<string> strs){
    int n=strs.size();
    if (strs.empty()) return "";
    string prefix=strs[0];
    
    for(int i=0;i<n;i++){
    int j=0;
    while(j<prefix.size()&&j<strs.size()&&prefix[j]==strs[i][j]){//this is where the magic happens we check prefix[j]==the first character with strs[i][j]which is 1 st character of ith string we dont check for each string indivualyy thats awesome :]
            j++;
    }
    prefix=prefix.substr(0,j);
    if(prefix=="")break;
}
    return prefix;
} 


