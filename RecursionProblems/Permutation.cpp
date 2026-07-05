#include<iostream>
#include<vector>
using namespace std;

void permutation(string str,int index,vector<string>& ans){
    if(index >= str.length()){
        ans.push_back(str);
        return;
    }

    for(int i = index;i<str.length();i++){
        swap(str[index],str[i]);
        permutation(str,index+1,ans);
        swap(str[index],str[i]);
    }
}

int main(){
    string input = "abc";
    vector<string> ans;

    permutation(input,0,ans);

    for(string s : ans){
        cout << s << " ";
    }
}