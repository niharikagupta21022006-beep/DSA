#include<iostream>
#include<string>
using namespace std;

string reverse(string& str,int i,int j){
    if(i>j){
        return str;
    }

    swap(str[i],str[j]);
    string back =  reverse(str,i+1,j-1);
    return back;
}
int main(){

    string name = "abbae";
    string original = name;
    string type = reverse(name,0,name.length()-1);

    if(type == original){
        cout <<"Palindrome" << endl;

    }
    else{
        cout << "Not a palindrome" << endl;
    }
    

}