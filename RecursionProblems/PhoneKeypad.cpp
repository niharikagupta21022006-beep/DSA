#include<iostream>
#include<vector>
using namespace std;

void solve(string digits,int index,string output,vector<string>& ans,string mapping[]){
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for(int i =0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits,index+1,output,ans,mapping);
        output.pop_back();
    }
}
int main(){
    string digits;
    cin >> digits;

    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    vector<string>ans;
    string output = "";

    solve(digits,0,output,ans,mapping);

    for(string s : ans){
        cout << s << " ";
    }

    return 0;

    
}