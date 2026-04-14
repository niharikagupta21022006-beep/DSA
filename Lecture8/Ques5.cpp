#include<iostream>
using namespace std;

string replaceSpaces(string s){
    string result = "";

    for(int i = 0;i<s.length();i++){
        if(s[i] == ' '){
            result += "@40";
        }

        else{
            result += s[i];
        }
    }

    return result;
}
int main(){
    string s = "My Name is Niharika";
    cout << replaceSpaces(s);

}