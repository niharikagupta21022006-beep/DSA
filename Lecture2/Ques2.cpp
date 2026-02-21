#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,5,7,6,5,7,1};

    int ans = 0;
    for(int i= 0;i<7;i++){
        ans = ans^arr[i];
    }

    cout<<ans;
}