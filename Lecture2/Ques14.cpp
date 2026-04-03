#include<iostream>
using namespace std;
int main() {
    int arr[] = {16,17,4,3,5,2};
    int n = 6;

    for(int i = 0;i<n;i++){
        bool isLeader = true;
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[i]){
                isLeader = false;
                break;
            }
        }

        if(isLeader) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}