#include<iostream>
using namespace std;

bool isPalindrome(char str[]){
    int start = 0;
    int end = 0;

    while(str[end]!= '\0'){
        end++;
    }
    end--;

    while(start<end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;

    }
    return true;
}
int main(){
    char str[100];
    cout <<"Enter string :";
    cin >> str;

    if(isPalindrome(str)){
        cout << "Valid Palindrome";
    }

    else{
        cout << "Not a Palindrome";
    }
    return 0;
}