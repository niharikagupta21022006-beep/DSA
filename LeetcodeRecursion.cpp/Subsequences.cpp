#include<iostream>
using namespace std;

void subsequence(string str,int n,int index,string output){
    if(index >= n){
        cout << output << endl;
        return;
    }
        
    

    subsequence(str,n,index + 1,output);

    output.push_back(str[index]);

    subsequence(str,n,index+1,output);

}
int main(){
    string str = "abc";
    string output = "";
    


   subsequence(str,3,0,output);
}