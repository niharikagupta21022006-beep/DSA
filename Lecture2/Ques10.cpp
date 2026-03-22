#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,2,1};
    int n = 5;

    bool isPalindrone = true;

    for(int i = 0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            isPalindrone = false;
            break;
        }
    }

    cout << (isPalindrone?"Palindrone" :"NOt Palindrone");
    return 0;

}