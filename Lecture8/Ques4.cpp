#include<iostream>
using namespace std;
int main(){
    string s = "aabbcccdddddddd";
    int freq[26] = {0};

    for(int i = 0;i<s.length();i++){
        freq[s[i] - 'a']++;
    }

    int maxCount = 0;
    char maxChar;

    for(int i = 0;i<26;i++){
        if(freq[i]>maxCount){
            maxCount = freq[i];
            maxChar = i+'a';
        }
    }

    cout <<"Maximum Occuring character:" << maxChar;
    return 0;
}