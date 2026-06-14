#include<iostream>
using namespace std;
int main(){
    
    int arr[] = {1,0,2,0,3,0};
    int n = 6;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i] != 0){
                swap(arr[i],arr[j]);
            }
        }

    }

    for(int i = 0;i<n;i++){
        cout << arr[i] << endl;
    }

    return 0;
}