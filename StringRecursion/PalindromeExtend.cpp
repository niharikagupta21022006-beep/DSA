#include<iostream>
using namespace std;

bool palindrome(string str,int i,int j){
    if(i>=j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }

    return palindrome(str,i+1,j-1);
}
int main(){
    string name = "abba";

    if(palindrome(name,0,name.length()-1)){
        cout << "Palindrome" << endl;

    }

    else{
        cout << "Not a Palindrome" << endl;
    }

}