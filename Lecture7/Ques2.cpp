#include<iostream>
using namespace std;

bool isSortedAndRotated(int arr[],int n){
    int count = 0;
    for(int i = 1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }

    if(arr[n-1]>arr[0]){
        count++;
    }

    return count <= 1;
}
int main(){
    int arr[] = {3,4,5,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(isSortedAndRotated(arr,n)){
        cout << "Array is sorted and rotated";
    }

    else{
        cout << "Array is not sorted and rotated";
    }

    return 0;

}